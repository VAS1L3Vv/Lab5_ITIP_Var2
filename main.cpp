#include <iostream>
#include "Complex.h";
using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	double re, im;

	cout << "������� �������������� ����� �����: ";
	cin >> re;
	cout << "������� ������ ����� �����: ";
	cin >> im;
	cout << endl;
	Complex Z(re, im);

	cout << Z << endl;

	cout << "�������������� �����: " << Re(Z) << endl;

	cout << endl;

	cout << "������ �����: " << Im(Z) << endl;

	cout << endl;

	cout << "������ ������������ �����: " << R(Z) << endl;

	cout << endl;

	cout << "�������� ������������ �����: " << Phi(Z) << endl;

	cout << "������� �� ������������ �����  cos(z): " << cos(Z);

	cout << "��������� ������� �� 2 ��������: " << y(Z);

}