#include <iostream>
using namespace std;

int main() {
	int number1, number2 = 0;
	cout << "Enter first number: ->> ";
	cin >> number1;
	cout << "Enter second number: ->> ";
	cin >> number2;
	if (number1 > number2) {
		cout << "first number is more than second number " << number1 << " > " << number2 << endl;

	}
	else if (number1 < number2) {
		cout << "first number is less than second number " << number1 << " < " << number2 << endl;
	}
	else {
		cout << "Numbers are equal :" << number1 << " = " << number2 << endl;
	}

	return 0;
}