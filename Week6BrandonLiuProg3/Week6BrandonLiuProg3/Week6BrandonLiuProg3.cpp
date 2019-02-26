#include "pch.h"
#include "Athing.h"
#include "Athing.cpp"
using namespace std;

int main()
{
	cout << "Name: Brandon Liu - Program Name: Week6BrandonLiuProg3 - Date: 2/19/2019" << endl;


	aThing <int> ThingIInt;
	ThingIInt.setWeight(110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingIInt.getWeight() << endl;

	aThing <double> ThingIDou;
	ThingIDou.setWeight(110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingIDou.getWeight() << endl;

	aThing <float> ThingIFlo;
	ThingIFlo.setWeight(110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingIFlo.getWeight() << endl;

	aThing <long int> ThingILoi;
	ThingILoi.setWeight(110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingILoi.getWeight() << endl;

	aThing <int> ThingEInt;
	ThingEInt.setWeight((int)110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingEInt.getWeight() << endl;

	aThing <double> ThingEDou;
	ThingEDou.setWeight((double)110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingEDou.getWeight() << endl;

	aThing <float> ThingEFlo;
	ThingEFlo.setWeight((float)110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingEFlo.getWeight() << endl;

	aThing <long int> ThingELoi;
	ThingELoi.setWeight((long int)110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingELoi.getWeight() << endl;

	system("PAUSE");
	return 0;
}