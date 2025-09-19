#include <iostream>

void analyze_pointer(int *ptr);

int main() {
	
	int iValue = 67;
	analyze_pointer(&iValue);

	int *heapValue = new int;
	*heapValue = 99;
	analyze_pointer(heapValue);
	delete heapValue;

	return 0;
}

void analyze_pointer(int *ptr) {
	std::cout << "Memory address stored in the pointer: " << ptr << std::endl;
	std::cout << "Value of the integer the pointer is pointing to: " << *ptr << "\n\n";
}