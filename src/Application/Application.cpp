#include "Application/Application.hpp"

Application::Application()
{
	std::cout << "Application instance created" << std::endl;
}

void Application::init()
{
	std::cout << "Application instance initialized" << std::endl;
	p_MessageRouter = new MessageRouter();
}

void Application::run()
{
	std::cout << "Application instance running" << std::endl;
}

void Application::finish()
{	
	delete p_MessageRouter;
	std::cout << "Application instance finished" << std::endl;
}

Application::~Application()
{
	delete p_MessageRouter;
	std::cout << "Application instance destroyed" << std::endl;
}