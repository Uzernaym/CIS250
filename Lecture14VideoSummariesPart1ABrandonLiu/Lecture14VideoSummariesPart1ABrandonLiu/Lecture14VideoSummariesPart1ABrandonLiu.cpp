#include "pch.h"
#include <iostream>
using namespace std;

class Enemy {
protected:
	int attackPower;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};
class Ninja : public Enemy {
public:
	void attack() {
		cout << "i am a ninja, ninja chop! -" << attackPower << endl;
	}
};
class Monster : public Enemy {
public:
	void attack() {
		cout << "monster must eat you!!!! -" << attackPower << endl;
	}
};
int main() {
	cout << "Name: Brandon Liu - Program Name: Lecture 14 - Date: 4/15/2019\n";
	Ninja n;
	Monster m;
	Enemy * enemy1 = &n;
	Enemy * enemy2 = &m;
	enemy1->setAttackPower(29);
	enemy2->setAttackPower(99);
	n.attack();
	m.attack();
	system("pause");
	return 0;
}