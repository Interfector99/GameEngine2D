#include "MessageRouter/MessageRouter.hpp"

MessageRouter::MessageRouter(IApplication* p_Application)
{
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