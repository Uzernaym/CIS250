#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Brandon Liu - 1/22/2019" << endl;
	int array[6] = { 0 };
	double sum = 0;
	cout << fixed;
	cout << setprecision(2); //Sets maximum decimal value to the hundredth place
	for (int i = 1; i <= 6; i++) { //Asks user for each number in array and saves it
		cout << "Enter number " << i << endl;
		cin >> array[i-1];
	}
	
	for (int i = 0; i < 6; i++) { //Prints numbers of array in order
		cout << "Number " << i << " = " << array[i] << endl;
	}
	
	for (int i = 0; i < 6; i++) { //Adds values of array
		sum = sum + array[i];
	}
	cout << "The sum of the array is " << sum << endl; //Prints sum
	cout << "The average of the array is " << sum / 6 << endl; //Prints average
	return 0;
}