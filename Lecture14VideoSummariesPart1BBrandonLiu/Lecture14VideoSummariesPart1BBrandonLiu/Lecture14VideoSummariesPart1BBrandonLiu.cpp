#include "pch.h"
#include <iostream>
using namespace std;

class Enemy {
public:
	virtual void attack() {

	}
};
class Ninja : public Enemy {
public:
	void attack() {
		cout << "ninja attack" << endl;
	}
};
class Monster : public Enemy {
public:
	void attack() {
		cout << "monster attack" << endl;
	}
};
int main() {
	cout << "Name: Brandon Liu - Program Name: Lecture 14 - Date: 4/15/2019\n";
	Ninja n;
	Monster m;
	Enemy * enemy1 = &n;
	Enemy * enemy2 = &m;
	enemy1->attack();
	enemy2->attack();
	system("pause");
	return 0;
}