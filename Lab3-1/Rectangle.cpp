#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {
	this->width = new double;
	this->height = new double;
}

Rectangle::Rectangle(double width, double height) {
	this->width = new double(width);
	this->height = new double(height);
}

Rectangle::~Rectangle() {
	delete this->width;
	delete this->height;
}

double Rectangle::calcArea() {
	return *width * *height;
}

void Rectangle::show() {
	cout << "Rectangle is" << endl;
	cout << "\twidth:" << *width << endl;
	cout << "\theight:" << *height << endl;
	cout << "\tarea:" << calcArea() << endl;
}