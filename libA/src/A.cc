#include "a/A.h"

#include <iostream>

namespace a {
	void A::Hello(int level) {
  std::cout << "[" << level << "] Enter A" << std::endl;
  std::cout << "[" << level << "] Exit A" << std::endl;
}
}

