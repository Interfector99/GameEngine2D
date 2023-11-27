#ifndef APPLICATION_HPP
#define APPLICATION_HPP

// Interface
#include "Application/IApplication.hpp"

// Modules
#include "Modules/InputModule/InputModule.hpp"
#include "Modules/DisplayModule/DisplayModule.hpp"

#include <iostream>

class Application : public IApplication
{
private:
	enum class STATE
	{
		ON,
		RUNNING,
		OFF
	};
	STATE e_State;
	InputModule m_InputModule;
	DisplayModule m_DisplayModule;
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	Application();
	~Application() override;

	//////////////////////////////
	//          Pipeline		//
	//////////////////////////////
	void executePipeline() override;
	void initialize() override;
	void run() override;
	void finish() override;

	//////////////////////////////
	//      Module callbacks	//
	//////////////////////////////
	void handleInput(int key, int action) override;
};

#endif // APPLICATION_HPP