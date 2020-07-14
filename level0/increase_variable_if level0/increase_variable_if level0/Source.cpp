#include<iostream>
using namespace std;

int main() {
	int a, b, c = 0;
	cout << "Enter first number: -> ";
	cin >> a;
	cout << "Enter second number: -> ";
	cin >> b;
	cout << "Enter third number: -> ";
	cin >> c;
	if (a == b || b == c || a == c) {
		a += 5;
		b += 5;
		c += 5;
		cout << "You have at least two numbers equal, we increase all three numbers by 5 :" << endl;
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
	}
	else {
		cout << "All three numbers are different!" << endl;
	}

	return 0;
}