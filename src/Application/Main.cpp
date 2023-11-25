#include "Application/Application.hpp"

#include <iostream>

int main()
{
	Application application = Application();
	application.run();
	application.destroy();
	return 0;
}