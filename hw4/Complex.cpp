#include <iostream>
#include <iomanip>
#include "Complex.h"
using namespace std;

Complex::Complex(double i, double j){
	realPart = i;
	imaginaryPart = j;
}

Complex Complex::add(Complex b){
	Complex c;
	
	c.realPart = realPart + b.realPart;
	c.imaginaryPart = imaginaryPart + b.imaginaryPart;
	return c;	
}

Complex Complex::subtract(Complex b){
	Complex c;

	c.realPart = realPart - b.realPart;
	c.imaginaryPart = imaginaryPart - b.imaginaryPart;
	return c;
}

void Complex:: setComplexNumber (double i, double j){
	realPart = i;
	imaginaryPart = j;
	return ;
}

void Complex:: printComplex(){
	cout << "(" << realPart << ", " << imaginaryPart <<")";
}
