#include <iostream>
using namespace std;

int main() {
	int pic[3][9] = {
		{201,205,203,205,203,205,203,205,187},
		{204,205,206,205,206,205,206,205,185},
		{200,205,202,205,202,205,202,205,188},
	};
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			cout << (char)pic[j][i];
		}
		cout << endl;
	}
	return 0;
}