#pragma once
#include "Square.h"
class Cube : public Square
{
protected:
	int height;
public:
	Cube();
	~Cube();

	int getHeight();
	void setHeight(int h);
	int getVolume();
};

