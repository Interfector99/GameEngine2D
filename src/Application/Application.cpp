#include "Application/Application.hpp"

//////////////////////////////
// Constructors/Destructors //
//////////////////////////////
Application::Application()
{
	std::cout << "Application instance created" << std::endl;
	e_State = STATE::ON;
}

Application::~Application()
{
	std::cout << "Application instance destroyed" << std::endl;
	e_State = STATE::OFF;
}

//////////////////////////////
//          Pipeline		//
//////////////////////////////
void Application::executePipeline()
{
	initialize();
	run();
	finish();
}

void Application::initialize()
{
	std::cout << "Application instance initialized" << std::endl;
	m_DisplayModule.initialize();
	m_InputModule.initialize();
	m_DisplayModule.setHandleInputCallback([this](int key, int action)
	{
		handleInput(key, action);
	});
}

void Application::run()
{
	std::cout << "Application instance started running" << std::endl;
	e_State = STATE::RUNNING;

	while (e_State == STATE::RUNNING)
	{
		glfwPollEvents();
	}

	std::cout << "Application instance stopped running" << std::endl;
}

void Application::finish()
{
	std::cout << "Application instance finished" << std::endl;
	e_State = STATE::OFF;
	m_InputModule.finish();
}

//////////////////////////////
//      Module callbacks	//
//////////////////////////////
void Application::handleInput(int key, int action)
{
	std::cout << "Application received input: Key = " << key << ", Action = " << action << std::endl;
	if (key == GLFW_KEY_Q && action == GLFW_PRESS)
	{
		e_State = STATE::OFF;
	}
}