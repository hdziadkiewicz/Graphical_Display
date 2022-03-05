#include "GraphicalDisplay.h"

void GraphicalDisplay::drawCircle(int r)
{
	//funkcja do rysownia 
	for (int y = -r; y <= r; y++)
	{
		for (int x = -r; x <= r; x++)
		{
			if (y * y + x * x <= r * r)
				std::cout << "c";
			else std::cout << " ";
		}
		std::cout << std::endl;
	}
	// wyj¹tki 
	try
	{
		if (r < 0)
			throw std::out_of_range("\nSrednica kola nie moze byc ujemna!\n");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2)
{
	// prosta nr 1
	double a_1 = static_cast<double>(a2) / static_cast<double>(a1); // static cast ¿eby móc otrzymywaæ u³amki a dzia³anie na prosta przechodzac¹ przez 2 punkty //pocz¹tek uk³adu((0,0) i (3,2))
	//prosta nr 2
	double a_2 = static_cast<double>(b2) / static_cast<double>(b1);
	//prosta nr 3
	double a_3 = (static_cast<double>(a2) - static_cast<double>(b2)) / (static_cast<double>(a1) - static_cast<double>(b1));
	double b = static_cast<double>(a2 - (a1 * a_3));
	
	// funkcja do rysowania 
	for (int y = a2; y >= b2; y--)
	{
		for (int x = 0; x <= a1; x++)
		{
			if (y <= a_1 * x && y >= a_2 * x && y >= (a_3 * x + b))
			{
				std::cout << "t";
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	// wyj¹tki 
	try
	{

		if (b2 >= 0)
			throw std::out_of_range("\nWartosc b2 nie jest liczba calkowita ujemna!\n");
		if (a1 < 0 || a2 < 0 || b1 < 0)
			throw std::out_of_range("\nJedna z wartosci a1,a2,b1 jest liczba ujemna!\n");
		if (a1 == b1 || a2 == b2)
			throw std::out_of_range("\nZle dobrane wspolrzedne dla trojkata!\n");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
}

void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2)
{
	// wspó³czynniki 
	double a_p1 = a2 / static_cast<double>(a1);
	double a_p2 = b2 / static_cast<double>(b1);
	double a_p3 = a2 / static_cast<double>(-b1);
	double a_p4 = b2 / static_cast<double>(-a1);
	// wspó³czynniki 
	double b_p1 = static_cast<double>(a2 -a1 * a_p2);
	double b_p2 = static_cast<double>(b2 - b1 * a_p1);
	double b_p3 = static_cast<double>(b2 - b1 * a_p4); 
	double b_p4 = static_cast<double>(a2 - a1* a_p3);

	//funkcja do rysownia 
	for (int y = a2; y >= b2; y--)
	{
		for (int x = 0; x <= a1 + b1; x++)
		{
			if ( y <= a_p1 * x && y >= a_p2 * x && y <= (a_p2 * x + b_p1) && y >= (a_p1 * x + b_p2) && y >= a_p3 * x && y <= (a_p3 * x + b_p4) && y <= a_p4 * x && y >= (a_p4 * x + b_p3))
			std::cout << "p";
			else std::cout << " ";
		}
		std::cout << std::endl;
	}
	// wyj¹tki 
	try
	{

		if (b2 >= 0)
			throw std::out_of_range("\nWartosc b2 nie jest liczba calkowita ujemna!\n");
		if (a1 < 0 || a2 < 0 || b1 < 0)
			throw std::out_of_range("\nJedna z wartosci a1,a2,b1 jest liczba ujemna!\n");
		if (a1 == b1 || a2 == b2)
			throw std::out_of_range("\nZle dobrane wspolrzedne dla rownolegloboku!\n");

	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
}


