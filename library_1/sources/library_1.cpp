#include "../library_1.h"

#include <iostream>

Object::Object()
{
	std::cout << "Creation" << std::endl;
}

Object::~Object()
{
	std::cout << "Destruction" << std::endl;
}

int Object::execute() const
{
	std::cout << "\tExecution" << std::endl;
	return 0;
}
