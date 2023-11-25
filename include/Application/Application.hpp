#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "IApplication.hpp"
#include "MessageRouter/MessageRouter.hpp"

#include <iostream>
#include <memory>

/**
 * @file Application.hpp
 * @author Interfector99
 * @brief Base implementation for the IApplication interface.
 *
 * @section what_it_is What it is
 * Base implementation of the IApplication interface.
 *
 * @section what_it_does What it does
 * Handles the state of the application and communicates with the MessageRouter class.
 *
 * @section design Design
 * No specific design pattern used.
 */

class Application : public IApplication
{
private:
	bool isRunning;
public:
	Application();
	~Application() override;
	// ---------------------------------------
	void executePipeline() override;
	void init() override;
	void run() override;
	void finish() override;
	// ---------------------------------------
	void receiveMessage(std::string message) override;
};

#endif // APPLICATION_HPP