#include<iostream>
using namespace std;
int main() {
    char letter;
    int letterNumb;
    cout << "Enter your lowercase letter that neeeds to be translated into uppercase" << endl;
    cin >> letter;
    letterNumb = letter;
    cout << "Your letter in uppercase is: "<<char(letterNumb-32);
}