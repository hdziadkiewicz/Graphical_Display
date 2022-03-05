#pragma once

#include <iostream>
#include <exception>

class MyExceptions : public std::runtime_error
{
public:

	MyExceptions():runtime_error("\n")
	{}

};