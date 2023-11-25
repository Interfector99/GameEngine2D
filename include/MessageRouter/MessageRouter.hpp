#ifndef MESSAGEROUTER_HPP
#define MESSAGEROUTER_HPP

#include "IMessageRouter.hpp"
#include "Application/IApplication.hpp"

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
public:
	MessageRouter(IApplication* p_Application);
	~MessageRouter() override;
	// ---------------------------------------
	void sendMessage(std::string message) override;
};

#endif // MESSAGEROUTER_HPP