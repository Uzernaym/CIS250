#include "pch.h"
#include "colorPicker.h"
using namespace std;   /* srand, rand */

int main()
{
	cout << "Name: Brandon Liu - Program Name: Week11BrandonLiuInherit - Date: 4/11/2019" << endl;
	colorPicker P;
	P.printAllColors();
	cout << "Random Color: " << P.randomColor() << endl;
	system("pause");
	return 0;
}