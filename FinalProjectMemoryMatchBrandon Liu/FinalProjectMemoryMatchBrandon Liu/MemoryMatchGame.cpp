#include "pch.h"
#include "MemoryMatchGame.h"
#include <string>

using namespace std;

const string MemoryMatchGame::words[] = {"Pig","Cow","Bird","Snake","Fish","Dolphin","Turtle","Mouse","Monkey","Horse","Dog","Cat","Seal","Eel","Shark","Anemone",
"Starfish","Human","Deer","Moose","Mole","Lizard","Frog","Fox","Squirrel","Rabbit","Leopard","Elephant","Lion","Tiger","Zebra","Hyena","Coyote","Turkey","Bat",
"Bear","Beaver","Ferret","Vulture","Duck","Flamingo","Raccoon","Wolf","Crab","Chipmunk","Whale","Goat","Sheep","Skunk","Sloth"};

MemoryMatchGame::MemoryMatchGame()
{
	cout << "Game started" << endl;
}

void MemoryMatchGame::printWords() {
	for (int i = 0; i < 50; i++) {
		cout << words[i] << " ";
	}
	cout << endl;
}

MemoryMatchGame::~MemoryMatchGame()
{
}