#include <iostream>
#include "Complex.h";
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	double re, im;

	cout << "Введите действитульную часть числа: ";
	cin >> re;
	cout << "Введите мнимую часть числа: ";
	cin >> im;
	cout << endl;
	Complex Z(re, im);

	cout << Z << endl;

	cout << "Действительная часть: " << Re(Z) << endl;

	cout << endl;

	cout << "Мнимая часть: " << Im(Z) << endl;

	cout << endl;

	cout << "Модуль комплексного числа: " << R(Z) << endl;

	cout << endl;

	cout << "Аргумент комплексного числа: " << Phi(Z) << endl;

	cout << "Косниус от комплексного числа  cos(z): " << cos(Z);

	cout << "Результат задания по 2 варианту: " << y(Z);

}