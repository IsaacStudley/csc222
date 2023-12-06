#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
#include "complex.h"
using namespace std;

// constructors
Complex::Complex() {
    real = 0; imag = 0;
    polar = false;
}

Complex::Complex(double r, double i) {
    real = r; imag = i;
    polar = false;
}

Complex::Complex(double m, double t, Flag) {
    mag = m; theta = t;
    polar = true;
}

// accessors
double Complex::get_real()
{
    return real;
}

double Complex::get_imag()
{
    return imag;
}

double Complex::get_mag()
{
    if (polar == false) calculate_polar();
    return mag;
}

double Complex::get_theta()
{
    if (polar == false) calculate_polar();
    return theta;
}

void Complex::calculate_polar()
{
    mag = sqrt(real * real + imag * imag);
    theta = atan(imag / real);
    polar = true;
}

void Complex::calculate_cartesian()
{
    assert(polar == true);
    real = mag * cos(theta); 
    imag = mag * sin(theta); 
}

// member functions 
Complex Complex::operator + (const Complex& c)
{
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator - (const Complex& c)
{
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator * (Complex& c)
{
    if (polar == false) calculate_polar();
    if (c.polar == false) c.calculate_polar();
    return Complex(mag * c.mag, theta + c.theta, POLAR);
}

Complex Complex::operator / (Complex& c)
{
    if (polar == false) calculate_polar();
    if (c.polar == false) c.calculate_polar();
    return Complex(mag / c.mag, theta + c.theta, POLAR);
}

double Complex::abs()
{
    if (polar == false) calculate_polar();
    return mag;
}

string Complex::str_cartesian()
{
    return to_string(get_real()) + " + " + to_string(get_imag()) + "i";
}

string Complex::str_polar()
{
    if (polar == false) calculate_polar();
    string mag = to_string(get_mag());
    string theta = to_string(get_theta());
    return mag  + "e^" + theta + "i"; 
}

ostream& operator<<(ostream& os, const Complex& c1)
{
    os << c1.real << c1.imag;
    return os; 
} // overloading output 