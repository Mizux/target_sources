#include "b/B.h"

#include <iostream>

namespace b {
	void B::Hello(int level) {
  std::cout << "[" << level << "] Enter B" << std::endl;
  std::cout << "[" << level << "] Exit B" << std::endl;
}
}

