#include <iostream>
#include "test.h"

int find_sum(int x, int y) {
    std::cout << " txt from find_sum " << std::endl;
    return x + y;
}

int main() {
    std::cout << " txt from main " << std::endl;
	test_find_sum();
	std::cout << "All tests passed!" << std::endl;
    return 0;
}