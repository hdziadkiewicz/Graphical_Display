#pragma once

#include <iostream>

class Display
{
public:

	virtual void drawCircle(int r);
	virtual void drawTriangle(int a1, int a2, int b1, int b2);
	virtual void drawParallelogram(int a1, int a2, int b1, int b2);

};