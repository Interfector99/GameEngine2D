#include "Application/Application.hpp"

#include <iostream>

int main()
{
	Application application;
	application.run();
	application.destroy();
	return 0;
}