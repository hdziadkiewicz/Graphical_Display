#pragma once

// klasa szablonowa w projekcie
#include<iostream>
#include"Shape.h"

template<typename T, typename T2> 
class Circle :public Shape
{
public:

	T promien_okregu;
	Circle();
	Circle(T _r);
	Circle(T2* w, T _r);

	void draw();
	void setPromien(T _r);
	void getPromien();
	
};

template<typename T, typename T2>
inline Circle<T, T2>::Circle()
{
	promien_okregu = "promien";
}

template<typename T, typename T2>
inline Circle<T, T2>::Circle(T _r)
{
	promien_okregu = _r;
}

template<typename T, typename T2>
inline Circle<T, T2>::Circle(T2* w, T _r)
{
	DrawShapes = w;
	promien_okregu = _r;
}

template<typename T, typename T2>
inline void Circle<T, T2>::draw()
{
	DrawShapes->drawCircle(promien_okregu);
}

template<typename T, typename T2>
inline void Circle<T, T2>::setPromien(T _r)
{
	promien_okregu = _r;
}

template<typename T, typename T2>
inline void Circle<T, T2>::getPromien()
{
	return promien_okregu;
}


