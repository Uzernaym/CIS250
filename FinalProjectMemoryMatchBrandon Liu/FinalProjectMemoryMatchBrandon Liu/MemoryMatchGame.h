#pragma once
#include <iostream>
#include <string>
using namespace std;

class MemoryMatchGame
{
public:
	static const string words[];
	static int wordsSize;

	MemoryMatchGame();

	void printWords();

	~MemoryMatchGame();
};