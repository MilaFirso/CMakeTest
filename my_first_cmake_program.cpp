#include<iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "rus");
	using namespace std;
	string name;
	cout << "Введите имя: ";
	cin >> name;
	cout << "Здравствуйте, " << name << " ! " << endl;

	return 0;
}