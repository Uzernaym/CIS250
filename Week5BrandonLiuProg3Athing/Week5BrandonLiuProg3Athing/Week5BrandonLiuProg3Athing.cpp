#include "pch.h"
#include "Athing.h"
using namespace std;

int main()
{ // STEP 2 - DECLARATION - USE the new datatype/class 'aThing' in a Declaration statement to create 'ThingOne'.
	cout << "Name: Brandon Liu - Program Name: Week5BrandonLiuProg3Athing - Date: 2/12/2019" << endl;
	aThing ThingOne;
	// STEP 3 - Use the OBJECT defined in step 2 - With dot notation
	ThingOne.setWeight(110);
	cout << "Use Function/Method get Weight - " << "Weight is: " << ThingOne.getWeight() << endl;
	system("PAUSE");  // MAC User comment this line out.
	return 0;
}
