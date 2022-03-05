#pragma once

#include<iostream>
#include "Shape.h"

static int counter;

class ComplexShape : public Shape
{
public:

	Shape* shapes[5];
	Display* w;
	ComplexShape(Display* w);
	bool add(Shape* o);
	void draw();

};