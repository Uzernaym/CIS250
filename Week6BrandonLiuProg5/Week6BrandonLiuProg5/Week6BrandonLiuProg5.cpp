#include "pch.h"
#include "Rectangle.h"
#include "Rectangle.cpp"
using namespace std;

int main() {
	cout << "Name: Brandon Liu - Program Name: Prog5Rect - Date: 2/19/2019\n\n";

	Rectangle <int> IInt;
	IInt.set_values(5, 6);
	cout << "area: " << IInt.area() << endl;

	Rectangle <double> IDou;
	IDou.set_values(5.5, 6.1);
	cout << "area: " << IDou.area() << endl;

	Rectangle <float> IFlo;
	IFlo.set_values(5, 6.12);
	cout << "area: " << IFlo.area() << endl;

	Rectangle <long int> ILoi;
	ILoi.set_values(5, 612);
	cout << "area: " << ILoi.area() << endl;

	Rectangle <int> EInt;
	EInt.set_values((int)3, 41);
	cout << "area: " << EInt.area() << endl;

	Rectangle <double> EDou;
	EDou.set_values((double)3, 421.91);
	cout << "area: " << EDou.area() << endl;

	Rectangle <float> EFlo;
	EFlo.set_values((float)3.1, 4);
	cout << "area: " << EFlo.area() << endl;

	Rectangle <long int> ELoi;
	ELoi.set_values((long  int)3, 4);
	cout << "area: " << ELoi.area() << endl;

	system("pause");
	return 0;
}
