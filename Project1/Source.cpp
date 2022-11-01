// Lab_03_4.cpp
// < Назаренко Софія >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 24
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y * y <= R * R - x * x && y > 0) ||
		(y <= x && y >= -R && x <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}