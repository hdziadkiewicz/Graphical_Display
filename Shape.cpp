#include "Shape.h"

Shape::Shape()
{
	DrawShapes = 0;
}

Shape::Shape(Display* w)
{
	DrawShapes = w;
}

void Shape::draw()
{
}

void Shape::changeDisplay(Display* newDisplay)
{
	DrawShapes = newDisplay;
}
