#include "pch.h"
#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Name: Brandon Liu - Program Name: Prog6Box - Date: 2/25/2019\n\n";

	Birthday birthObj(04, 19, 2002);

	People brandonLiu("Brandon Liu", birthObj);
	brandonLiu.printInfo();

	system("pause");
	return 0;
}