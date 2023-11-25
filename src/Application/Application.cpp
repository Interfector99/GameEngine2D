#include "Application/Application.hpp"

Application::Application()
{
	std::cout << "Application instance created" << std::endl;
	m_State = STATE::ON;
	isRunning = false;
}

Application::~Application()
{
	std::cout << "Application instance destroyed" << std::endl;
	m_State = STATE::OFF;
	isRunning = false;
	p_MessageRouter.reset();
}
// --------------------------------------------------------------------------------------------
void Application::executePipeline()
{
	init();
	run();
	finish();
}

void Application::init()
{
	std::cout << "Application instance initialized" << std::endl;
	p_MessageRouter = std::make_shared<MessageRouter>(this);
}

void Application::run()
{
	std::cout << "Application instance started running" << std::endl;

	std::srand(std::time(nullptr));

	m_State = STATE::RUNNING;
	isRunning = true;
	while (isRunning)
	{
		int randomNumber = std::rand() % 1001;

		std::cout << randomNumber << std::endl;

		if (randomNumber == 1000)
		{
			isRunning = false;
		}
	}
	m_State = STATE::ON;
	std::cout << "Application instance stopped running" << std::endl;
}

void Application::finish()
{
	std::cout << "Application instance finished" << std::endl;
	m_State = STATE::OFF;
	isRunning = false;
	p_MessageRouter.reset();
}
// --------------------------------------------------------------------------------------------
void Application::sendMessage(std::string receiver, std::string message)
{
	std::cout << "  Application sent message to " << receiver << ": " << message << std::endl;
	if (receiver == "MessageRouter")
	{
		p_MessageRouter->receiveMessage("Application", message);
	}
}

void Application::receiveMessage(std::string sender, std::string message)
{
	std::cout << "  Application received message from " << sender << ": " << message << std::endl;
	
	if (sender == "MessageRouter")
	{
		if (message == "END PROGRAM")
		{
			isRunning = false;
		}
	}
}