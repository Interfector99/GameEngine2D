#include "Application/Application.hpp"

Application::Application()
{
	isRunning = false;
	std::cout << "Application instance created" << std::endl;
}

Application::~Application()
{
	p_MessageRouter.reset();
	std::cout << "Application instance destroyed" << std::endl;
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
	p_MessageRouter = std::make_shared<MessageRouter>(this);
	std::cout << "Application instance initialized" << std::endl;
}

void Application::run()
{
	std::cout << "Application instance started running" << std::endl;

	std::srand(std::time(nullptr));

	isRunning = true;
	while (isRunning)
	{
		int randomNumber = std::rand() % 1001;

		std::cout << "Generated number: " << randomNumber << std::endl;

		if (randomNumber == 1000)
		{
			p_MessageRouter->sendMessage("END PROGRAM");
		}
	}

	std::cout << "Application instance stopped running" << std::endl;
}

void Application::finish()
{
	p_MessageRouter.reset();
	std::cout << "Application instance finished" << std::endl;
}
// --------------------------------------------------------------------------------------------
void Application::receiveMessage(std::string message)
{
	std::cout << "    Application received message: " << message << std::endl;
	if (message == "END PROGRAM") 
	{
		isRunning = false;
	}
}