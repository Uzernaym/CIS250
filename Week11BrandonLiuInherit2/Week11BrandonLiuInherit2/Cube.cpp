#include "pch.h"
#include "Cube.h"

Cube::Cube()
{
	length = 0;
	width = 0;
	height = 0;
}

int Cube::getHeight() {
	return height;
}
void Cube::setHeight(int h) {
	height = h;
}
int Cube::getVolume() {
	return length * width * height;
}

Cube::~Cube()
{
}
