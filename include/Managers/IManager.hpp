#ifndef IMANAGER_HPP
#define IMANAGER_HPP

// Parent classess
#include "MessageRouter/IMessageRouter.hpp"

// Interface classess

// Child classess
// 
// C++ modules
#include <iostream>
#include <memory>
#include <vector>

/**
 * @file IManager.hpp
 * @author Interfector99
 * @brief Purely abstract interface/contract for IManager classes.
 *
 * @section what_it_is What it is
 * Purely abstract interface for implementing every Manager subclass.
 */

class IManager
{
protected:
	IMessageRouter* p_MessageRouter; // Non-owning pointer to parent MessageRouter
public:
	virtual ~IManager() = default;
	// ---------------------------------------
	virtual void sendMessage(std::string message) = 0;
	virtual void receiveMessage(std::string message) = 0;
};

#endif // IMANAGER_HPP