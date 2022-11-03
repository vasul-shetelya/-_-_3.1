// Lab_03_1.cpp
// < Шетеля Василь >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 0.6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = 5*exp(3*x);
	// спосіб 1: розгалуження в скороченій формі
	if (x <= 1)
		B=3+sin(fabs(x));
	if (-1 < x && x <= 3)
		B=2*exp(x/4-1);
	if (x > 3)
		B=7-sqrt(2)*x*x*x;
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= 1)
		B=3+sin(fabs(x));
	else
		if (x > 3)
			B=7-sqrt(2)*x*x*x;
		else
			B=2*exp(x/4-1);
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}