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

	~Player() {	};
};

class Team {
private:
	Player *ptrPlayer;
	vector<Player> players;
public:
	Team(Player *player = NULL) : ptrPlayer(player) {}

	string getPlayerName() {
		return ptrPlayer->getName();
	}
	void add(Player &p) {
		players.push_back(p);
	};
	void printAllNames() {
		for (int i = 0; i < players.size(); i++) {
			cout << players[i].getName() << " ";
		}
	}

	~Team() {
		cout << "Team deleted" << endl;
	};
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

	
	Team * basketballTeam = new Team;
	basketballTeam->add(P1);
	basketballTeam->add(P2);
	basketballTeam->add(P3);
	basketballTeam->add(P4);
	basketballTeam->add(P5);
	basketballTeam->printAllNames();
	cout << endl;
	delete basketballTeam;


	Team * soccerTeam = new Team;
	soccerTeam->add(P1);
	soccerTeam->add(P2);
	soccerTeam->add(P3);
	soccerTeam->add(P4);
	soccerTeam->add(P5);
	soccerTeam->add(P6);
	soccerTeam->add(P7);
	soccerTeam->printAllNames();
	cout << endl;
	delete soccerTeam;

	cout << endl;

	cout << P1.getName() << endl;
	cout << P2.getName() << endl;
	cout << P3.getName() << endl;
	cout << P4.getName() << endl;
	cout << P5.getName() << endl;
	cout << P6.getName() << endl;
	cout << P7.getName() << endl;

	system("pause");
	return 0;
}
