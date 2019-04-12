#include "pch.h"
#include "Square.h"
#include <iostream>

Square::Square()
{
	length = 0;
	width = 0;
}
int Square::getWidth() {
	return width;
}
void Square::setWidth(int w) {
	width = w;
}
int Square::getLength() {
	return length;
}
void Square::setLength(int l) {
	length = l;
}
int Square::getArea() {
	return length * width;
}

Square::~Square()
{
}