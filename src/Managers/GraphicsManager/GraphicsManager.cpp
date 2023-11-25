#include "Managers/GraphicsManager/GraphicsManager.hpp"

GraphicsManager::GraphicsManager(IMessageRouter* p_MessageRouter)
{
	std::cout << "    GraphicsManager instance created" << std::endl;
	this->p_MessageRouter = p_MessageRouter;
	
}

GraphicsManager::~GraphicsManager()
{
	std::cout << "    GraphicsManager instance destroyed" << std::endl;
}
// --------------------------------------------------------------------------------------------
void GraphicsManager::sendMessage(std::string receiver, std::string message)
{
	std::cout << "      GraphicsManager sent message to " << receiver << ": " << message << std::endl;
}

void GraphicsManager::receiveMessage(std::string sender, std::string message)
{
	std::cout << "      GraphicsManager received message from " << sender << ": " << message << std::endl;
}
