#include <iostream>

int main() {
	int num;
	//Prompt that user for an integer 
	std::cout << "Enter an integer: ";std::cin >> num;
	//Double the integer
	int doubled = num * 2;
	//Print the result
	std::cout << "The double value is:" << doubled << std::endl;

	return 0;
}