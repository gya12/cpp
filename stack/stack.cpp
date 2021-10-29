#include "stack.hpp"

namespace Stack {
	const int max_size = 200;
	char v[max_size];
	int top = 0;
}

void Stack::push(char c) {
	// check for overflow and push c
	v[top] = c;
	top++;
}

char Stack::pop() {
	//check for underflow and pop
	top--;
	return v[top];
}