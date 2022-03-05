#include "Parallelogram.h"

Parallelogram::Parallelogram(Display* w, int a1, int a2, int b1, int b2)
{
	DrawShapes = w;
	p1 = a1;
	p2 = a2;
	p3 = b1;
	p4 = b2;
}

void Parallelogram::draw()
{
	DrawShapes->drawParallelogram(p1, p2, p3, p4);
}
