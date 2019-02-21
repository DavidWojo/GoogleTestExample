#include "Rectangle.hpp"

Rectangle::Rectangle()
{
	this->width = 5;
	this->height = 5;
	this->name = "MyRectangle";
}

Rectangle::Rectangle(int width, int height, string name)
{
	if (name.compare("") == 0)
	{
		name = "default";
	}
	cout << "Constructing rectangle - name is " << name.c_str() << endl;
	this->width = width;
	this->height = height;
	this->name = name;
}

Rectangle::~Rectangle()
{
	cout << "Destructing rectangle - name is " << name.c_str() << endl;
}

int Rectangle::getArea()
{
	return this->width * this->height;
}

string Rectangle::getName()
{
	return this->name;
}
void Rectangle::setHeight(int height)
{
	this->height = height;
}

int Rectangle::getHeight()
{
	return this->height;
}
void Rectangle::setWidth(int width)
{
	this->width = width;
}

int Rectangle::getWidth()
{
	return this->width;
}
