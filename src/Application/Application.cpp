#include "Application/Application.hpp"

Application::Application()
{
	this->state = STATE::ON;
	std::cout << "App started" << std::endl;
}

void Application::run()
{
	std::cout << "App running" << std::endl;
}

void Application::destroy()
{
	this->state = STATE::OFF;
	std::cout << "App finished" << std::endl;
}

Application::~Application()
{
	this->state = STATE::OFF;
	std::cout << "App destructed" << std::endl;
}