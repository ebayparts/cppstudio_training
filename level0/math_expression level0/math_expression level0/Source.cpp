#include<iostream>
using namespace std;

int main() {
    int a, b, f =0;
    cout << "This programm will count expression (a + b - f / a) + f * a * a - (a + b)" << endl;
    cout << "Enter number \"a\" :"<< endl;
        cin>> a;
    cout << "Enter number \"b\" :"<< endl;
        cin>> b;
    cout << "Enter number \"f\" :"<< endl;
        cin >> f;
    cout << "counting: (a + b - f / a) + f * a * a - (a + b) = " << (a + b - f / a) + f * a * a - (a + b) << endl;
 
}