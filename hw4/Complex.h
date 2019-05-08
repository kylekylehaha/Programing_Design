#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
	public:
		Complex(double =0, double =0);
		Complex add(Complex);
		Complex subtract(Complex);
		void setComplexNumber(double,double);
		void printComplex();
	
	private:
		double realPart;
		double imaginaryPart;
};

#endif
