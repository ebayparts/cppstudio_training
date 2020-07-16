#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n = 0;
	double z, a, b, x, betta, y = 0;

	cout << "Enter x-quantity: ->";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter z for x" << i + 1 <<": - >  ";
		cin >> z;
		cout << "Enter a for x" << i + 1 << ": - >  ";
		cin >> a;
		cout << "Enter b for x" << i + 1 << ": - >  ";
		cin >> b;
		cout << "Enter betta for x" << i + 1 << ": - >  ";
		cin >> betta;
		x = pow(z, 3) - b + pow(a,2)/pow(tan(betta),2);
		y += x;
	}
	cout << "y = " << y;

	return 0;
}