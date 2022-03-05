#pragma once

#include <iostream>
#include "TextDisplay.h"
#include "GraphicalDisplay.h"

class Shape : public TextDisplay, public GraphicalDisplay
{
public:

	Shape();
	Display* DrawShapes; 
	Shape(Display* w);
	virtual void draw();
	void changeDisplay(Display* newDisplay);

};