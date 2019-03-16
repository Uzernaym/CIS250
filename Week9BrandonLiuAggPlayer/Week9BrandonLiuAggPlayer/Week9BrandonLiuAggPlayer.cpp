#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
private:
	string name;
public:
	string getName() {
		return name;
	}
	void setName(string n) {
		name = n;
	}

	Player() : name("Unknown") {}
	
	Player(string n) : name(n) {}
};

class Team {
private:
	Player *ptrPlayer;
	vector<Player *> players;
public:
	Team(Player *player = NULL) : ptrPlayer(player) {}

	string getPlayerName() {
		return ptrPlayer->getName();
	}
	void add(Player &p) {
		players.push_back(p);
	};
	string printAllNames() {
		for (int i = 0; i < players.size(); i++) {
			cout << players[i].getName() << " ";
		}
		return cout << "\n";
	}
};

int main() {
	cout << "Name: Brandon Liu - Program Name: AggPlayer - Date: 03/15/2019\n";
	Player P1 = Player("George");
	Player P2 = Player("Ivan");
	Player P3 = Player("Hang");
	Player P4 = Player("Tuyet");
	Player P5;
	P5.setName("Sue");
	Player P6;
	P6.setName("Victoria");
	Player P7;
	P7.setName("Tumbo");

	Team basketballTeam;
	Team soccerTeam;
	
	cout << P1.getName() << endl;




	system("pause");
	return 0;
}
