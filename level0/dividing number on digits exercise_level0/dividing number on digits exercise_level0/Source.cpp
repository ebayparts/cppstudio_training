#include<iostream>
using namespace std;

int main() {
    int number = 0;
    cout << "Enter your 5-digit number" << endl;
    cin >> number;
    cout<< "First digit of your number is : " << number/10000<<endl;
    cout<< "Second digit of your number is : " << (number/1000)%10<<endl;
    cout<< "Third digit of your number is : " << (number / 100) % 10 <<endl;
    cout<< "Fourth digit of your number is : " << (number / 10) % 10 <<endl;
    cout<< "Fifth digit of your number is : " << number % 10 <<endl;
}