#include "Managers/GraphicsManager/GraphicsManager.hpp"

GraphicsManager::GraphicsManager(IMessageRouter* p_MessageRouter)
{
	this->p_MessageRouter = p_MessageRouter;
	std::cout << "GraphicsManager instance created" << std::endl;
}

GraphicsManager::~GraphicsManager()
{
	std::cout << "GraphicsManager instance destroyed" << std::endl;
}
// --------------------------------------------------------------------------------------------
void GraphicsManager::sendMessage(std::string message)
{
	std::cout << "    GraphicsManager sent message: " << message << std::endl;
	p_MessageRouter->receiveMessage(message);
}

void GraphicsManager::receiveMessage(std::string message)
{
	std::cout << "    GraphicsManager received message: " << message << std::endl;
}
