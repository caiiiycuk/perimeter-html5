// Copyright 2002 The Trustees of Indiana University.

// Use, modification and distribution is subject to the Boost Software 
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

//  Boost.MultiArray Library
//  Authors: Ronald Garcia
//           Jeremy Siek
//           Andrew Lumsdaine
//  See http://www.boost.org/libs/multi_array for documentation.

// 
// fail_csubarray.cpp -
//   Testing subarray and const_subarray assignment 
//

#include "boost/multi_array.hpp"

#define BOOST_INCLUDE_MAIN
#include "boost/test/test_tools.hpp"

#include "boost/array.hpp"

int
test_main(int,char*[])
{
  const int ndims=3;
  typedef boost::multi_array<int,ndims> array;

  boost::array<array::size_type,ndims> sma_dims = {{2,3,4}};
  array sma(sma_dims);

  int num = 0;
  for (array::index i = 0; i != 2; ++i)
    for (array::index j = 0; j != 3; ++j)
      for (array::index k = 0; k != 4; ++k)
        sma[i][j][k] = num++;


  array::const_subarray<ndims-1>::type csba = sma[0];

  // FAIL! Preserve constness (no const_subarray -> subarray conversion).
  array::subarray<ndims-1>::type sba = csba;

  return boost::exit_success;
}
