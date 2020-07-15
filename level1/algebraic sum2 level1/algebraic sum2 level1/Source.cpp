#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double m,k = 0;
	int N,sum  = 0;
	cout << "Enter number N:->>";
	cin >> N;
	cout << "Enter degree k:->>";
	cin >> k;
	for (double i = 0; i < N; i++)
	{
		m = pow(i+1, k);
		sum += m;
	}
	cout << "Algebraic sum is: " << sum << endl;
	return 0;
}