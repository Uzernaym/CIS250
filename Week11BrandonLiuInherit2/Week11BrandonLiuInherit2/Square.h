#pragma once
class Square
{
protected:
	int length;
	int width;
public:
	Square();
	~Square();

	int getWidth();
	void setWidth(int w);
	int getLength();
	void setLength(int l);
	int getArea();
};

