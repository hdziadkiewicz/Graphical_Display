#include "ComplexShape.h"

ComplexShape::ComplexShape(Display* w)
{
	DrawShapes = w;
}

bool ComplexShape::add(Shape* o) // liczba elementów w ComplexShape 
{
	if (counter < 5)
	{
		shapes[counter] = o;
		counter++;
		return true;
	}
	else return false;
}

void ComplexShape::draw()
{
	for (int i = 0; i < counter; i++)
	{
		shapes[i]->draw();
	}
}
