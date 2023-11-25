#include "MessageRouter/MessageRouter.hpp"

MessageRouter::MessageRouter()
{
	std::cout << "MessageRouter instance created" << std::endl;
}

MessageRouter::~MessageRouter()
{
	std::cout << "MessageRouter instance destroyed" << std::endl;
}

void MessageRouter::sendMessageToApplication()
{
	///TODO: Send message to parent class.
}