#include "pch.h"
#include "box.h"
using namespace std;


void box::setWidth(int x) { //Set values
	width = x;
}
void box::setHeight(int x) {
	height = x;
}
void box::setDepth(int x) {
	depth = x;
}
int box::getDepth() { //Get values
	return depth;
}
int box::getHeight() {
	return height;
}
int box::calcArea() {
	return width * height;
}
int box::calcVolume() {
	return width * height * depth;
}