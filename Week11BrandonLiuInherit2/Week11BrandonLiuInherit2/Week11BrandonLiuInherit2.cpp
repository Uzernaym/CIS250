#include "pch.h"
#include "Cube.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Name: Brandon Liu - Program Name: Week11BrandonLiuInherit2 - Date: 4/11/2019" << endl;

	Cube one;
	one.setHeight(1);
	one.setLength(2);
	one.setWidth(3);
	Cube two;
	two.setHeight(10);
	two.setLength(10);
	two.setWidth(10);
	Cube three;
	three.setHeight(864);
	three.setLength(152);
	three.setWidth(412);

	cout << "Volume of Cube One is - " << one.getVolume() << endl;
	cout << "Volume of Cube Two is - " << two.getVolume() << endl;
	cout << "Volume of Cube Three is - " << three.getVolume() << endl;

	system("pause");
	return 0;
}