// Parent classess

// Interface classes
#include "Application/IApplication.hpp"

// Child classess
#include "Application/Application.hpp"

// C++ modules
#include <memory>

/**
 * @file main.cpp
 * @author Interfector99
 * @brief Main entry point of the application.
 *
 * @section what_it_is What it is
 * Just the main function call.
 *
 * @section what_it_does What it does
 * Executes the IApplication pipeline.
 *
 * @section interactions Interactions
 * Gets and processes application level messages.
 *
 * @section design Design
 * No design pattern used, but Application class is exchangeable through the interface.
 */

int main()
{
	std::shared_ptr<IApplication> p_Application(new Application());
	p_Application->executePipeline();
	p_Application.reset();
	return 0;
}