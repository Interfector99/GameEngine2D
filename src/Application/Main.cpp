#include "Application/Application.hpp"

/*
Main:
What it is:
	Just the main function call.

What it does:
	Just executes the IApplication pipeline.

Design:
	No design pattern used, but Application class is exchange-able through the interface.
*/

/// TODO: abstract factory pattern for different Application hierarchies.
int main()
{
	IApplication* p_Application = new Application();
	p_Application->executePipeline();
	return 0;
}