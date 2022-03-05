#pragma once

#include<iostream>
#include "Display.h"

class TextDisplay : public Display
{
public:

	void drawCircle(int r);
	void drawTriangle(int a1, int a2, int b1, int b2);
	void drawParallelogram(int a1, int a2, int b1, int b2);

};