#include <iostream>
using namespace std;

int main() {

	string name, surname, patronymic, group;
	int length = 0;
	cout << "Enter student name: ";
	cin >> name;
	cout << "Enter student surname: ";
	cin >> surname;
	cout << "Enter student patronymic: ";
	cin >> patronymic;
	cout << "Enter student group: ";
	cin >> group;

	length = name.length() + surname.length() + patronymic.length() + 6;
	if (length < 30 + group.length()) {
		length = 30 + group.length();
	}
	for (int i = 0; i < length; i++)
	{
		cout << "*";
	}
	cout << endl << "* Laboratory work # 1";
	for (int j = 22; j < length; j++)
	{
		cout << " ";
		if (j == length - 1) {
			cout << "*" << endl;
		}
	}
	cout << "* Executor: st. of group #: " << group;
	for (int j = 30 + group.length(); j < length+1; j++)
	{
		cout << " ";
		if (j == length) {
			cout << "*" << endl;
		}
	}
	cout << "* " << surname << " " << name << " " << patronymic;
	for (int j = name.length() + surname.length() + patronymic.length(); j < length-5; j++)
	{
		cout << " ";
		if (j == length - 6) {
			cout << "*" << endl;
		}
	}
	for (int i = 0; i < length; i++)
	{
		cout << "*";
	}

	return 0;
}