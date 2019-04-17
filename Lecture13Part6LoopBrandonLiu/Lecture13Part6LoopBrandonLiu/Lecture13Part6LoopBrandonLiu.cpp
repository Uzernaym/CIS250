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
		sound = "meow";
	}
	void animalSound() {
		cout << animalName << " says meow!" << endl;
	}
};

class dog : public animal {
public:
	dog() {
		animalName = "dog";
		sound = "bark";
	}
	void animalSound() {
		cout << animalName << " says bark" << endl;
	}
};

class elephant : public animal {
public:
	elephant() {
		animalName = "elephant";
		sound = "honk";
	}
	void animalSound() {
		cout << animalName << " says honk" << endl;
	}
};

class mouse : public animal {
public:
	mouse() {
		animalName = "mouse";
		sound = "squeak";
	}
	void animalSound() {
		cout << animalName << " says squeak" << endl;
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: Part 6 Loop - Date: 4/16/2019\n";

	cat C1;
	dog D1;
	elephant E1;
	mouse M1;


	animal * ptrBaseAnimal = new animal[4];
	ptrBaseAnimal[0] = C1;
	ptrBaseAnimal[1] = D1;
	ptrBaseAnimal[2] = E1;
	ptrBaseAnimal[3] = M1;

	for (int i = 0; i < 4; i++) {
		ptrBaseAnimal[i].animalSound();
	}

	system("pause");
	return 0;
}