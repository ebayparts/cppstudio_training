#include <iostream>
using namespace std;

int main() {
	int number = 0;
	do {
		cout << "Enter two digit number:";
		cin >> number;
		if (number < 10 || number>99) {
			cout << " your number is not two digit!" << endl;
		}
	} while (number < 10 || number>99);
	if (number % 10 > number / 10) {
		cout << number % 10 << " > " << number / 10;
	}
	else if (number % 10 < number / 10) {
		cout << number % 10 << " < " << number / 10;
	}
	else cout << number % 10 << " = are equal each other = " << number / 10;
	return 0;
}