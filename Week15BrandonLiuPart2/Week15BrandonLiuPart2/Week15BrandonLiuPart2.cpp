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
	cout << "Name: Brandon Liu - Program Name: Week15BrandonLiuPart2 - Date: 4/24/2019\n";
	Complex c1Sub, c2Sub, resultSub;
	cout << "Enter first complex number:\n";
	c1Sub.input();
	cout << "Enter second complex number:\n";
	c2Sub.input();
	/* In case of operator overloading of binary operators in C++ programming, the object on right hand side of operator is always assumed as argument by compiler. */
	resultSub = c1Sub - c2Sub; /* c2 is furnised as an argument to the operator function. */
	cout << "Subtract" << endl;
	resultSub.output();

	Complex c1Add, c2Add, resultAdd;
	cout << "Enter first complex number:\n";
	c1Add.input();
	cout << "Enter second complex number:\n";
	c2Add.input();
	resultAdd = c1Add + c2Add;
	cout << "Add" << endl;
	resultAdd.output();

	Complex c1Mul, c2Mul, resultMul;
	cout << "Enter first complex number:\n";
	c1Mul.input();
	cout << "Enter second complex number:\n";
	c2Mul.input();
	resultMul = c1Mul * c2Mul;
	cout << "Multiply" << endl;
	resultMul.output();

	Complex c1Div, c2Div, resultDiv;
	cout << "Enter first complex number:\n";
	c1Div.input();
	cout << "Enter second complex number:\n";
	c2Div.input();
	resultDiv = c1Div / c2Div;
	cout << "Divide" << endl;
	resultDiv.output();
	system("pause");
	return 0;
}