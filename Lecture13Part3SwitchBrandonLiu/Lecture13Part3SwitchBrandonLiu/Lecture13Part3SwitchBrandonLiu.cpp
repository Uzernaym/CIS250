#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class animal {
protected:
	string animalName;
	string sound;
public:
	virtual void animalSound() {
		cout << animalName << " says " << sound << endl;
	}
};

class cat : public animal {
public:
	cat() {
		animalName = "cat";
	}
	void animalSound() {
		cout << "meow" << endl;
	}
};

class dog : public animal {
public:
	dog() {
		animalName = "dog";
	}
	void animalSound() {
		cout << "bark" << endl;
	}
};

class elephant : public animal {
public:
	elephant() {
		animalName = "elephant";
	}
	void animalSound() {
		cout << "honk" << endl;
	}
};

class mouse : public animal {
public:
	mouse() {
		animalName = "mouse";
	}
	void animalSound() {
		cout << "squeak" << endl;
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: Part 3 Switch - Date: 4/15/2019\n";

	cat C1;
	dog D1;
	elephant E1;
	mouse M1;

	char inChar;
	cout << "What animal would you like?" << endl;
	cin >> inChar;

	switch(inChar) {
	case 'c':
		C1.animalSound();
		break;
	case 'd':
		D1.animalSound();
		break;
	case 'e':
		E1.animalSound();
		break;
	case 'm':
		M1.animalSound();
		break;
	default:
		cout << "Invalid animal" << endl;
		break;
	}

	system("pause");
	return 0;
}