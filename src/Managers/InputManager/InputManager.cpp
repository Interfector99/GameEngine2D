#include "Managers/InputManager/InputManager.hpp"

InputManager::InputManager(IMessageRouter* p_MessageRouter)
{
	std::cout << "    InputManager instance created" << std::endl;
	this->p_MessageRouter = p_MessageRouter;
}

InputManager::~InputManager()
{
	std::cout << "    InputManager instance destroyed" << std::endl;
}
// --------------------------------------------------------------------------------------------
void InputManager::sendMessage(std::string receiver, std::string message)
{
	std::cout << "      InputManager sent message to " << receiver << ": " << message << std::endl;
}

void InputManager::receiveMessage(std::string sender, std::string message)
{
	std::cout << "      InputManager received message from " << sender << ": " << message << std::endl;
}
