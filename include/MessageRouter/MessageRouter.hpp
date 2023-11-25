#ifndef MESSAGEROUTER_HPP
#define MESSAGEROUTER_HPP

// Parent classess
#include "Application/IApplication.hpp"

// Interface classess
#include "IMessageRouter.hpp"

// Child classess
#include "Managers/InputManager/InputManager.hpp"
#include "Managers/GraphicsManager/GraphicsManager.hpp"

// C++ modules
#include <iostream>

/**
 * @file MessageRouter.hpp
 * @author Interfector99
 * @brief Base implementation for the IMessageRouter interface.
 *
 * @section what_it_is What it is
 * Base implementation of IMessageRouter interface.
 *
 * @section what_it_does What it does
 * Communicates with the Manager classes.
 *
 * @section design Design
 * No specific design pattern used.
 */

class MessageRouter : public IMessageRouter
{
private:
	IApplication* p_Application; // Non-owning pointer to parent Application
	std::vector<std::shared_ptr<IManager>> v_Managers;
public:
	MessageRouter(IApplication* p_Application);
	~MessageRouter() override;
	// ---------------------------------------
	void sendMessage(std::string receiver, std::string message) override;
	void receiveMessage(std::string sender, std::string message) override;
};

#endif // MESSAGEROUTER_HPP