#include <iostream>
#include <Windows.h>
#include <string.h>
#include <string>

using namespace std;

struct Employe
{
	string name;
	string carier;
	int age;
};

enum Position
{
	Director = 1,
	Accountant,
	Handyman
};

int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);

	string name;
	cout << "Введите имя работника: " << endl;
	getline(cin, name);

	cout << "Выберите должность работника: " << endl;
	cout << "1 - Director " << endl;
	cout << "2 - Accountant " << endl;
	cout << "3 - Handyman " << endl;
	int point;
	string carier;
	cin >> point;
	switch (point)
	{
	case Director:
		carier = "Director";
		break;
	case Accountant:
		carier = "Accountant";
		break;
	case Handyman:
		carier = "Handyman";
		break;
	default:
		break;
	}

	cout << "Введите возраст работника: " << endl;
	int age;
	cin >> age;

	Employe rabotniki{ name, carier, age };

	cout << "Имя работника: " << rabotniki.name << "\t" << "| Должность работника: " << rabotniki.carier << "\t" << "| Возраст работника: " << rabotniki.age << endl;

	return 0;
}