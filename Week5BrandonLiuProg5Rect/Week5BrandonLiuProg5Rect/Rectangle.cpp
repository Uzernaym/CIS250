#include "pch.h"
#include "Rectangle.h"

void Rectangle::set_values(int x, int y) {
	width = x;
	height = y;
}
int Rectangle::area() {
	int answer;
	// complete this function so the code works 
	answer = width * height;
	return answer;
}