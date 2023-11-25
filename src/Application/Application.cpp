#include "Application/Application.hpp"

Application::Application()
{
	this->state = ON;
	std::cout << "App started" << std::endl;
}

void Application::run()
{
	std::cout << "App running" << std::endl;
}

void Application::destroy()
{
	this->state = OFF;
	std::cout << "App finished" << std::endl;
}