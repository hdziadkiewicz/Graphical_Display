#include <iostream>
#include "GraphicalDisplay.h"
#include "TextDisplay.h"
#include "Circle.h"
#include "Triangle.h"
#include "Parallelogram.h"
#include "ComplexShape.h"
#include "Display.h"
#include "Shape.h"

using namespace std;

int main()
{
    //ustawienie wyœwietlania
    Display* w1 = new GraphicalDisplay();
    Display* w2 = new TextDisplay();
    //tworzenie figur 
    Shape* o1 = new Triangle(w1, 3, 2, 2, -2);
    Shape* o2 = new Parallelogram(w1, 3, 2, 2, -2);
    Shape* o3 = new Circle<int,Display>(w1, 5);
    ComplexShape* o4 = new ComplexShape(w1);
    //z³o¿ony kszta³t
    o4->add(o1);
    o4->add(o2);
    o4->add(o3);
    o4->draw();
    //osobne
    o1->draw();
    o2->draw();
    o3->draw();
    // zmiana na text
    o1->changeDisplay(w2);
    o2->changeDisplay(w2);
    o3->changeDisplay(w2);
    o4->changeDisplay(w2);
    o4->draw();
    o1->draw();
    o2->draw();
    o3->draw();
    // usuwanie 
    delete o1;
    delete o2;
    delete o3;
    delete o4;
    delete w2;
    delete w1;

	return 0;
}