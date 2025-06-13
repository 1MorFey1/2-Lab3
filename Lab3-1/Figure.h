#pragma once

class Figure {

public:
	virtual ~Figure() = default;

	virtual double calcArea() = 0;

	virtual void show() = 0;
};