#ifndef IMESSAGEROUTER_HPP
#define IMESSAGEROUTER_HPP

/*
IMessageRouter:
What it is:
	Purely abstract interface/contract for MessageRouter classes.

What it does:
	Provides connection to all IManager classes.

Design:
	No design pattern used.
*/

#include <iostream>
#include <vector>

class IMessageRouter
{
protected:
	//std::vector<IManager*> v_Managers;
public:
	virtual ~IMessageRouter() = default;

	virtual void sendMessageToApplication() = 0;
};

#endif // IMESSAGEROUTER_HPP