#include "pch.h"
#include <iostream>

using namespace std;

class fun {
	static int count;
public:
	int getCount() {
		return count;
	}
	fun() {
		count++;
	}
	
};
int fun::count = 0;

int main()
{
	cout << "Name: Brandon Liu - Program Name: Prog6Box - Date: 2/19/2019\n\n";

	fun	F1;
	fun F2;
	fun F3;
	fun F4;

	cout << F1.getCount() << endl;
	cout << F2.getCount() << endl;
	cout << F3.getCount() << endl;
	cout << F4.getCount() << endl;

	system("pause");
	return 0;
}