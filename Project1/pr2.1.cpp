// Lab_02.cpp
// <Погонюк Ілля>
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 0.12
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double Pi = 4 * atan(1.); // задаємо значення числа пі
	double a; // задаємо значення a
	double z1; // задаємо значення z1
	double z2; // задаємо значення z2

	cout << "a = "; cin >> a;
	z1 = (sin(4 * a) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a)));
	z2 = 1 / tan(3.0 / 2 * Pi - a);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
}
