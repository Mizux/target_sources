#pragma once

#include <iostream>

namespace ho {
	inline void Hello(int level) {
    std::cout << "[" << level << "] Enter HO" << std::endl;
    std::cout << "[" << level << "] Exit HO" << std::endl;
	}
}

