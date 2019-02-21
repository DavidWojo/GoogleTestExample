#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
	private:
		int width;
		int height;
		string name;

	public:
		Rectangle();
		Rectangle(int width, int height, string name);
		void setHeight(int height);
		int getHeight();
		void setWidth(int width);
		int getWidth();
		int getArea();
		string getName();
		~Rectangle();
};
