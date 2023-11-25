#ifndef INPUTMANAGER_HPP
#define INPUTMANAGER_HPP

// Parent classess
#include "MessageRouter/IMessageRouter.hpp"

// Interface classess
#include "Managers/IManager.hpp"

// Child classess

// C++ modules

class InputManager : public IManager
{
private:
	IMessageRouter* p_MessageRouter; // Non-owning pointer to parent MessageRouter
public:
	InputManager(IMessageRouter* p_MessageRouter);
	~InputManager() override;
	// ---------------------------------------
	void sendMessage(std::string receiver, std::string message) override;
	void receiveMessage(std::string sender, std::string message) override;
};

#endif // GRAPHICSMANAGER_HPP