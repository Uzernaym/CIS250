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
		cout << animalName << " says " << "meow" << endl;
	}
};

class dog : public animal {
public:
	dog() {
		animalName = "dog";
	}
	void animalSound() {
		cout << animalName << " says " << "bark" << endl;
	}
};

class elephant : public animal {
public:
	elephant() {
		animalName = "elephant";
	}
	void animalSound() {
		cout << animalName << " says " << "honk" << endl;
	}
};

class mouse : public animal {
public:
	mouse() {
		animalName = "mouse";
	}
	void animalSound() {
		cout << animalName << " says " << "squeak" << endl;
	}
};


void polyNoise(animal * a) {
	a->animalSound();
}

int main() {
	cout << "Name: Brandon Liu - Program Name: Part 3 Switch - Date: 4/15/2019\n";
	cat C1;
	dog D1;
	elephant E1;
	mouse M1;
	animal * cat = &C1;
	animal * dog = &D1;
	animal * elephant = &E1;
	animal * mouse = &M1;

	polyNoise(cat);
	polyNoise(dog);
	polyNoise(elephant);
	polyNoise(mouse);

	system("pause");
	return 0;
}
