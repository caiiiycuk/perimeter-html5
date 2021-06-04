// Copyright David Abrahams 2003. Use, modification and distribution is
// subject to the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#ifndef FACADE_ITERATOR_CATEGORY_DWA20031118_HPP
# define FACADE_ITERATOR_CATEGORY_DWA20031118_HPP

# include <boost/iterator/iterator_categories.hpp>

# include <boost/static_assert.hpp>

# include <boost/mpl/or.hpp>  // used in iterator_tag inheritance logic
# include <boost/mpl/and.hpp>
# include <boost/mpl/if.hpp>
# include <boost/mpl/apply_if.hpp>
# include <boost/mpl/identity.hpp>

# include <boost/type_traits/is_same.hpp>
# include <boost/type_traits/is_const.hpp>
# include <boost/type_traits/is_reference.hpp>
# include <boost/type_traits/is_convertible.hpp>

# include <boost/type_traits/is_same.hpp>

# include <boost/iterator/detail/config_def.hpp> // try to keep this last

# ifdef BOOST_ITERATOR_REF_CONSTNESS_KILLS_WRITABILITY
#  include <boost/python/detail/indirect_traits.hpp>
# endif

//
// iterator_category deduction for iterator_facade
//

// forward declaration
namespace boost { struct use_default; }

namespace boost { namespace detail  {

struct input_output_iterator_tag
  : std::input_iterator_tag
{
    // Using inheritance for only input_iterator_tag helps to avoid
    // ambiguities when a stdlib implementation dispatches on a
    // function which is overloaded on both input_iterator_tag and
    // output_iterator_tag, as STLPort does, in its __valid_range
    // function.  I claim it's better to avoid the ambiguity in these
    // cases.
    operator std::output_iterator_tag() const
    {
        return std::output_iterator_tag();
    }
};

//
// True iff the user has explicitly disabled writability of this
// iterator.  Pass the iterator_facade's Value parameter and its
// nested ::reference type.
//
template <class ValueParam, class Reference>
struct iterator_writability_disabled
# ifdef BOOST_ITERATOR_REF_CONSTNESS_KILLS_WRITABILITY // Adding Thomas' logic?
  : mpl::or_<
        is_const<Reference>
      , python::detail::is_reference_to_const<Reference>
      , is_const<ValueParam>
    >
# else 
  : is_const<ValueParam>
# endif 
{};


//
// Convert an iterator_facade's traversal category, Value parameter,
// and ::reference type to an appropriate old-style category.
//
// If writability has been disabled per the above metafunction, the
// result will not be convertible to output_iterator_tag.
//
// Otherwise, if Traversal == single_pass_traversal_tag, the following
// conditions will result in a tag that is convertible both to
// input_iterator_tag and output_iterator_tag:
//
//    1. Reference is a reference to non-const
//    2. Reference is not a reference and is convertible to Value
//
template <class Traversal, class ValueParam, class Reference>
struct iterator_facade_default_category
  : mpl::apply_if<
        mpl::and_<
            is_reference<Reference>
          , is_convertible<Traversal,forward_traversal_tag>
        >
      , mpl::apply_if<
            is_convertible<Traversal,random_access_traversal_tag>
          , mpl::identity<std::random_access_iterator_tag>
          , mpl::if_<
                is_convertible<Traversal,bidirectional_traversal_tag>
              , std::bidirectional_iterator_tag
              , std::forward_iterator_tag
            >
        >
      , typename mpl::apply_if<
            mpl::and_<
                is_convertible<Traversal, single_pass_traversal_tag>
                
                // check for readability
              , is_convertible<Reference, ValueParam>
            >
          , mpl::identity<std::input_iterator_tag>
          , mpl::identity<Traversal>
        >
    >
{
};

// True iff T is convertible to an old-style iterator category.
template <class T>
struct is_iterator_category
  : mpl::or_<
        is_convertible<T,std::input_iterator_tag>
      , is_convertible<T,std::output_iterator_tag>
    >
{
};

template <class T>
struct is_iterator_traversal
  : is_convertible<T,incrementable_traversal_tag>
{};

//
// A composite iterator_category tag convertible to Category (a pure
// old-style category) and Traversal (a pure traversal tag).
// Traversal must be a strict increase of the traversal power given by
// Category.
//
template <class Category, class Traversal>
struct iterator_category_with_traversal
  : Category, Traversal
{
# if 0
    // Because of limitations on multiple user-defined conversions,
    // this should be a good test of whether convertibility is enough
    // in the spec, or whether we need to specify inheritance.
    operator Category() const { return Category(); }
    operator Traversal() const { return Traversal(); }
# endif
    
# if !BOOST_WORKAROUND(BOOST_MSVC, <= 1300)
    // Make sure this isn't used to build any categories where
    // convertibility to Traversal is redundant.  Should just use the
    // Category element in that case.
    BOOST_STATIC_ASSERT(
        !(is_convertible<
              typename iterator_category_to_traversal<Category>::type
            , Traversal
          >::value));

    BOOST_STATIC_ASSERT(is_iterator_category<Category>::value);
    BOOST_STATIC_ASSERT(!is_iterator_category<Traversal>::value);
    BOOST_STATIC_ASSERT(!is_iterator_traversal<Category>::value);
#  if !BOOST_WORKAROUND(BOOST_MSVC, BOOST_TESTED_AT(1310))
    BOOST_STATIC_ASSERT(is_iterator_traversal<Traversal>::value);
#  endif 
# endif 
};

// Computes an iterator_category tag whose traversal is Traversal and
// which is appropriate for an iterator
template <class Traversal, class ValueParam, class Reference>
struct facade_iterator_category_impl
{
# if !BOOST_WORKAROUND(BOOST_MSVC, <= 1300)
    BOOST_STATIC_ASSERT(!is_iterator_category<Traversal>::value);
# endif 
    
    typedef typename iterator_facade_default_category<
        Traversal,ValueParam,Reference
    >::type category;
    
    typedef typename mpl::if_<
        is_same<
            Traversal
          , typename iterator_category_to_traversal<category>::type
        >
      , category
      , iterator_category_with_traversal<category,Traversal>
    >::type type;
};

//
// Compute an iterator_category for iterator_facade
//
template <class CategoryOrTraversal, class ValueParam, class Reference>
struct facade_iterator_category
  : mpl::apply_if<
        is_iterator_category<CategoryOrTraversal>
      , mpl::identity<CategoryOrTraversal> // old-style categories are fine as-is
      , facade_iterator_category_impl<CategoryOrTraversal,ValueParam,Reference>
    >
{
};

}} // namespace boost::detail

# include <boost/iterator/detail/config_undef.hpp>

#endif // FACADE_ITERATOR_CATEGORY_DWA20031118_HPP
