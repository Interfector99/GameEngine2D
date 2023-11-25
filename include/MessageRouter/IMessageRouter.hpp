#ifndef IMESSAGEROUTER_HPP
#define IMESSAGEROUTER_HPP

// Parent classess
#include "Application/IApplication.hpp"

// Interface classess

// Child classess
#include "Managers/IManager.hpp"

// C++ modules
#include <iostream>
#include <memory>
#include <vector>

/**
 * @file IMessageRouter.hpp
 * @author Interfector99
 * @brief Purely abstract interface/contract for MessageRouter classes.
 *
 * @section what_it_is What it is
 * Purely abstract interface for message routing.
 *
 * @section what_it_does What it does
 * Provides a connection to all IManager classes.
 *
 * @section design Design
 * No specific design pattern used.
 */

class IMessageRouter
{
protected:
	IApplication* p_Application; // Non-owning pointer to parent Application
	std::vector<std::shared_ptr<IManager>> v_Managers;
public:
	virtual ~IMessageRouter() = default;
	// ---------------------------------------
	virtual void sendMessage(std::string message) = 0;
	virtual void receiveMessage(std::string message) = 0;
};

#endif // IMESSAGEROUTER_HPP