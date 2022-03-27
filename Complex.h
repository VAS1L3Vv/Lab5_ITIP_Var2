
#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	double re, im;
public:
	Complex() : re(0), im(0) {}
	Complex(double Re) : re(Re), im(0) {}
	Complex(double Re, double Im) : re(Re), im(Im) {}

	friend double Re(Complex);
	friend double Im(Complex);
	friend double R(Complex);
	friend double Phi(Complex);

	friend ostream& operator << (ostream&, Complex);
	friend Complex operator+(Complex, Complex);
	friend Complex operator-(Complex, Complex);
	friend Complex operator*(Complex, Complex);
	friend Complex operator/(Complex, Complex);

	friend Complex y(const Complex &);
	friend double sin(Complex);
	friend Complex cos(Complex);
	friend double pow(Complex,int);
};