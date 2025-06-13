#pragma once
#include "Figure.h"

class Circle : public Figure {
	double* radius;

public:
	Circle();

	Circle(double radius);

	virtual ~Circle() override;

	virtual double calcArea() override;

	virtual void show() override;
};