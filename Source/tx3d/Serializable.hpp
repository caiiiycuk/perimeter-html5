/**
 *	"Procedural 3D Texture Library"
 *	
 *	Serializable class should have type (id) and
 *	should return their parameters as string for serialization.
 *
 *	@version $Id: Serializable.h,v 1.1 2002/11/05 17:55:26 ash Exp $
 *
 *	@author Alexander Porechnov (scm)
 */

#pragma once

#ifndef _TX3D_SERIAZABLE_H
#define _TX3D_SERIAZABLE_H

#include "tweaks.h"
#include <string>
using std::string;

namespace tx3d {

	class Serializable {
		public:
            virtual ~Serializable() = default;
			virtual string paramString() const = 0;
			virtual const string& getType() const = 0;
	};

}

#endif