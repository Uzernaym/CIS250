//Brandon Liu - 3/14/2019 - CIS250

//What is the sequence in which constructors and destructors are executed?
//Constructors are run when an instance of the class is called. For example, Whole W1; 
//Destructors are run at the end of the scope of a class. In this case, that is when the main() function is complete.

#include "pch.h"
#include <string>
#include <iostream>

using namespace std;

class Part {
public:
	Part() {
		cout << "In default part constructor" << endl;
	}
	~Part() {

	}
};

class Whole {
private:
	string wholeName;
public:
	Whole() {
		wholeName = "None";
		cout << "called default constructor " << wholeName << endl;
	}
	Whole(string name) {
		wholeName = name;
		cout  << "called parm constructor " << wholeName << endl;
	}
	string getName() {
		return wholeName;
	}
	~Whole() {
		cout << "called destructor " << wholeName << endl;
	}
};

int main()
{
	Whole W1;
	
	Whole W2 = Whole("w2");

	cout << "W1 wholeName = " << W1.getName() << endl;
	cout << "W2 wholeName = " << W2.getName() << endl;
	return 0;
}