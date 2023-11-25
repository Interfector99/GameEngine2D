#ifndef IAPPLICATION_HPP
#define IAPPLICATION_HPP

// Parent classess

// Interface classess

// Child classes
#include "MessageRouter/IMessageRouter.hpp"

// C++ modules
#include <memory>

/**
 * @file IApplication.hpp
 * @author Interfector99
 * @brief Purely abstract interface/contract for Application classes.
 *
 * @section what_it_is What it is
 * Purely abstract interface for the application lifecycle management.
 *
 * @section what_it_does What it does
 * Provides a state about the whole program and a connection to IMessageRouter interface.
 *
 * @section design Design
 * Implements a pipeline: Creation -> Initialization -> Run -> Finish -> Destroy.
 */

class IApplication
{
private:
protected:
	enum class STATE
	{
		ON,
		RUNNING,
		OFF
	};
	STATE m_State;
	std::shared_ptr<IMessageRouter> p_MessageRouter;
public:
	virtual ~IApplication() = default;
	// ---------------------------------------
	virtual void executePipeline() = 0;
	virtual void init() = 0;
	virtual void run() = 0;
	virtual void finish() = 0;
	// ---------------------------------------
	virtual void sendMessage(std::string receiver, std::string message) = 0;
	virtual void receiveMessage(std::string sender, std::string message) = 0;
};

#endif // IAPPLICATION_HPP