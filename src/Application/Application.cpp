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
//         Life cycle		//
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

	m_InputModule.initialize(m_DisplayModule.getWindow());
	m_InputModule.setHandleInputCallback([this](int key, int action)
	{
		handleInput(key, action);
	});

	m_GraphicsModule.initialize();
}

void Application::run()
{
	std::cout << "Application instance started running" << std::endl;
	e_State = STATE::RUNNING;

	while (e_State == STATE::RUNNING)
	{
		m_InputModule.pollEvents();
		m_DisplayModule.updateDisplay();
		m_GraphicsModule.renderGraphics();
	}

	std::cout << "Application instance stopped running" << std::endl;
}

void Application::finish()
{
	std::cout << "Application instance finished" << std::endl;
	e_State = STATE::OFF;
	m_GraphicsModule.finish();
	m_InputModule.finish();
	m_DisplayModule.finish();
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