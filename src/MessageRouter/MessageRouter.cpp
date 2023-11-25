#include "MessageRouter/MessageRouter.hpp"

MessageRouter::MessageRouter(IApplication* p_Application)
{
	this->v_Managers = std::vector<std::shared_ptr<IManager>>();
	this->v_Managers.push_back(std::make_shared<GraphicsManager>(this));
	this->p_Application = p_Application;
	std::cout << "MessageRouter instance created" << std::endl;
}

MessageRouter::~MessageRouter()
{
	std::cout << "MessageRouter instance destroyed" << std::endl;
}
// --------------------------------------------------------------------------------------------
void MessageRouter::sendMessage(std::string message)
{
	std::cout << "    MessageRouter sent message: " << message << std::endl;
	p_Application->receiveMessage(message);
}

void MessageRouter::receiveMessage(std::string message)
{
	std::cout << "    MessageRouter received message: " << message << std::endl;
}
