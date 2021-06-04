/**
 *	"Procedural 3D Texture Library"
 *	
 *	
 *
 *	@version $Id: SharedPointer.h,v 1.1 2002/11/07 13:48:36 ash Exp $
 *
 *	@author Alexander Porechnov (scm)
 */

#pragma once

#ifndef _TX3D_SHAREDPOINTER_H
#define _TX3D_SHAREDPOINTER_H

namespace tx3d {

	class SharedPointer {
		public:
			SharedPointer() : useCount(0) {}
			virtual ~SharedPointer() {}

			void referenced() {
				useCount++;
			}

			void released() {
				useCount--;
				if (useCount == 0) {
					delete this;
				}
			}

		private:
			int useCount;

			SharedPointer* operator &();
	};

}

#endif