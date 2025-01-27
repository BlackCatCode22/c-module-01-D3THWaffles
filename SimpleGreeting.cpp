#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;

	// Ask for the user's name
	cout << "Enter your name: ";
	getline(cin, name); // Use getline to allow full name input, including spaces

	// Creating a friendly greeting
	cout << "How's it goin', " << name << "! Welcome to The Matrix!" << endl;

	return 0;

}