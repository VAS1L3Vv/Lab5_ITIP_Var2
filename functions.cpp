#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

ostream& operator << (ostream& out, Complex x)
{
	out << x.re << " + i( " << x.im << " )" << endl;
	return out;
}

double Re(Complex x)
{
	return x.re;
}

double Im(Complex x)
{
	return x.im;
}

double R(Complex x)
{
	return sqrt(pow(x.re, 2) + pow(x.im, 2));
}

double Phi(Complex c)
{
	if ((c.re > 0 && c.im > 0) || (c.re > 0 && c.im < 0))
		return atan(c.im / c.re);
	else if (c.re < 0 && c.im < 0)
		return -M_PI + atan(c.im / c.re);
	return M_PI + atan(c.im / c.re);
}

Complex operator+(Complex x, Complex y)
{
	Complex result;
	result.re = x.re + y.re;
	result.im = x.im + y.im;
	return result;
}

Complex operator-(Complex x, Complex y)
{
	Complex result;
	result.re = x.re - y.re;
	result.im = x.im - y.im;
	return result;
}

Complex operator*(Complex x, Complex y)
{
	Complex result;
	result.re = x.re * y.re - x.im * y.im;
	result.im = x.re * y.im + y.re * x.im;
	return result;
}

Complex operator/(Complex x, Complex y)
{
	Complex result;
	result.re = (x.re * y.re + x.im * y.im) / (pow(y.re, 2) + pow(y.im, 2));
	result.im = (x.im * y.re - x.re * y.im) / (pow(y.re, 2) + pow(y.im, 2));
	return result;
}

Complex y(const Complex &z)
{
	return z*z - cos(2 * z);
}

double sin(Complex z)
{
	return sin(z.im);
}
Complex cos(Complex z)
{
	Complex cosz;
	cosz.re = cos(z.re) * cosh(z.im);
	cosz.im = (-1) * sin(z.re) * sinh(z.im);
	return cosz;
}

double pow(Complex z, int a)
{
	return pow(R(z),a)*(cos(a*Phi(z)) + sin(Phi(z)));
}