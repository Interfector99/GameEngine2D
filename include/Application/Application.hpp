#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "IApplication.hpp"

/*
Application:
What it is:
	Base implementation for the IApplication interface.

What it does:
	Handles State.
	Communicates with the MessageRouter class.

Design:
	No design pattern used.
*/

#include "MessageRouter/MessageRouter.hpp"

#include <iostream>

class Application : public IApplication
{
private:
	
public:
	Application();
	~Application() override;

	void init() override;
	void run() override;
	void finish() override;
};

#endif // APPLICATION_HPP