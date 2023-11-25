#ifndef IMESSAGEROUTER_HPP
#define IMESSAGEROUTER_HPP

#include <iostream>
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
	//std::vector<IManager*> v_Managers;
public:
	virtual ~IMessageRouter() = default;
	// ---------------------------------------
	virtual void sendMessage(std::string message) = 0;
};

#endif // IMESSAGEROUTER_HPP