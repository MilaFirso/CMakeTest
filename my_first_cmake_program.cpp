#include<iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	string name;
	cout << "������� ���: ";
	cin >> name;
	cout << "������������, " << name << " ! " << endl;

	return 0;
}