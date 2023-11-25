#include "MessageRouter/MessageRouter.hpp"

MessageRouter::MessageRouter(IApplication* p_Application)
{
	std::cout << "  MessageRouter instance created" << std::endl;
	this->v_Managers = std::vector<std::shared_ptr<IManager>>();
	this->v_Managers.push_back(std::make_shared<InputManager>(this));
	this->p_Application = p_Application;
}

MessageRouter::~MessageRouter()
{
	std::cout << "  MessageRouter instance destroyed" << std::endl;
}
// --------------------------------------------------------------------------------------------
void MessageRouter::sendMessage(std::string receiver, std::string message)
{
	std::cout << "    MessageRouter sent message to " << receiver << ": " << message << std::endl;
	if (receiver == "Application")
	{
		p_Application->receiveMessage("MessageRouter", message);
	}
	if (receiver == "GraphicsManager")
	{
		v_Managers[0]->receiveMessage("MessageRouter", message);
	}
}

void MessageRouter::receiveMessage(std::string sender, std::string message)
{
	std::cout << "    MessageRouter received message from " << sender << ": " << message << std::endl;
	if (sender == "Application")
	{
		if (message == "END PROGRAM")
		{

		}
	}
	if (sender == "GraphicsManager")
	{
		if (message == "dsfsdf")
		{

		}
	}
}
