#include "display.h"

namespace HeptaLed {

	Display& Display::add(std::shared_ptr<Digit> digit) {
		digits.push_back(digit);
		return *this;
	}

	
	ByteBuffer Display::render(std::string const& s) {
		ByteBuffer buffer(digits.size());
	
		std::string::const_iterator stringIt = s.begin();
		ByteBuffer::iterator byteIt = buffer.begin();
	
		for(DigitVector::iterator it = digits.begin(); it != digits.end(); ++it) {
			(*it)->render(stringIt,byteIt);
			++byteIt;
		}	
	
		return buffer;
	}	


}
