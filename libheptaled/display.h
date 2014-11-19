#ifndef DISPLAY_H
#define DISPLAY_H DISPLAY_H

#include <vector>
#include <memory>
#include <string>
#include <stdint.h>

#include "common.h"
#include "digit.h"

namespace HeptaLed {

	typedef std::vector<std::shared_ptr<Digit>> DigitVector;

	class Display {
	
		public:
			Display& add(std::shared_ptr<Digit> digit);
			ByteBuffer render(std::string const& s);	

		private:
			DigitVector digits;
	};
}


#endif
