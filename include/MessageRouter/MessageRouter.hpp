#ifndef MESSAGEROUTER_HPP
#define MESSAGEROUTER_HPP

/*
MessageRouter:
What it is:
	Base implementation for the IMessageRouter interface.

What it does:
	Communicates with the Manager classes.

Design:
	No design pattern used.
*/

#include "IMessageRouter.hpp"

#include <iostream>

class MessageRouter : public IMessageRouter
{
private:

public:
	MessageRouter();
	~MessageRouter() override;

	void sendMessageToApplication() override;
};

#endif // MESSAGEROUTER_HPP