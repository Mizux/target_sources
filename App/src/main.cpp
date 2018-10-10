#include <iostream>
#include "a/A.h"
#include "ho/HO.h"

int main(int argc, char** argv) {
  const int level = 1;
  std::cout << "[" << level << "] Enter App" << std::endl;
	a::A::Hello(level+1);
	ho::Hello(level+1);
  std::cout << "[" << level << "] Exit App" << std::endl;
	return 0;
}
