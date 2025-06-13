#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Rectangle.h"

using namespace std;

double volume(Figure& figure, double height) {

	return figure.calcArea() * height;
}

int main()
{

	Rectangle box(5, 7);
	box.show();

	Circle cir(7);
	cir.show();

	Figure* figure = NULL;

	char input;
	cout << "Input figure type (1-circle, 2-rectangle, 3-triangle, 4-trapezoid): ";
	cin >> input;

	switch (input)
	{
	case '1':

		double radius;
		cout << "Input the radius:\n";
		cin >> radius;

		figure = new Circle(radius);
		break;

	case '2':

		double width, height;
		cout << "Input the width:\n";
		cin >> width;
		cout << "Input the height:\n";
		cin >> height;

		figure = new Rectangle(width, height);
		break;

	case '3':

		double width_t, height_t;
		cout << "Input the width:\n";
		cin >> width_t;
		cout << "Input the height:\n";
		cin >> height_t;

		figure = new Triangle(width_t, height_t);
		break;

	case '4':

		double width1, width2, height_z;
		cout << "Input the width1:\n";
		cin >> width1;
		cout << "Input the width2:\n";
		cin >> width2;
		cout << "Input the height:\n";
		cin >> height_z;

		figure = new Trapezoid(width1, width2, height_z);
		break;

	default:
		cout << "Invalid figure type!";
		return -1;
	}

	figure->show();

	return 0;
}