/* C++ program to demonstrate the overloading of binary operator by subtracting one complex number from another. */
#include "pch.h"
#include <iostream>
using namespace std;
class Complex
{
private:
	float real;
	float imag;
public:
	Complex() : real(0), imag(0) { }
	void input()
	{
		cout << "Enter real and imaginary parts respectively: ";
		cin >> real;
		cin >> imag;
	}
	Complex operator - (Complex c2)    /* Operator Function */
	{
		Complex temp;
		temp.real = real - c2.real;
		temp.imag = imag - c2.imag;
		return temp;
	}

	Complex operator + (Complex c2)    /* Operator Function */
	{
		Complex temp;
		temp.real = real + c2.real;
		temp.imag = imag + c2.imag;
		return temp;
	}

	Complex operator * (Complex c2)    /* Operator Function */
	{
		Complex temp;
		temp.real = real * c2.real;
		temp.imag = imag * c2.imag;
		return temp;
	}

	Complex operator / (Complex c2)    /* Operator Function */
	{
		Complex temp;
		temp.real = real / c2.real;
		temp.imag = imag / c2.imag;
		return temp;
	}

	void operator ++(int)    /* Operator Function */
	{
		++real;
		++imag;
	}

	void output()
	{
		if (imag < 0)
			cout << "Output Complex number: " << real << imag << "i" << endl;
		else
			cout << "Output Complex number: " << real << "+" << imag << "i" << endl;
	}
};
int main()
{
	cout << "Name: Brandon Liu - Program Name: Week15BrandonLiuPart3 - Date: 4/24/2019\n";

	Complex c1, result;
	cout << "Enter a complex number:\n";
	c1.input();
	c1++;
	c1.output();

	system("pause");
	return 0;
}