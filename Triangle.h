#pragma once

#include <iostream>
#include "Shape.h"

class Triangle : public Shape
{
public:

	int p1, p2, p3, p4; 
	Triangle(Display* w, int a1, int a2, int b1, int b2);
	void draw();

};