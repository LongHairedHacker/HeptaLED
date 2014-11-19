#ifndef DIGIT_H
#define DIGIT_H DIGIT_H

#include <string>

#include "common.h"

namespace HeptaLed {

	
	class Digit {
		public:	
			virtual void render(std::string::const_iterator stringIt, ByteBuffer::iterator const& bufferIt) = 0;
		
	};
}


#endif
