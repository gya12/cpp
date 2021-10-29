#include "stack.hpp"
#include <iostream>

int main() {
	Stack::push('a');
	Stack::push('b');
	Stack::push('c');

	char res = Stack::pop();

	std::cout << res << std::endl;

	return 0;
}