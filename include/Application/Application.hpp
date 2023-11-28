#ifndef APPLICATION_HPP
#define APPLICATION_HPP

// Modules
#include "Modules/DisplayModule/DisplayModule.hpp"
#include "Modules/InputModule/InputModule.hpp"
#include "Modules/GraphicsModule/GraphicsModule.hpp"

#include <iostream>

class Application
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
	GraphicsModule m_GraphicsModule;
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	Application();
	~Application();

	//////////////////////////////
	//         Life cycle		//
	//////////////////////////////
	void executePipeline();
	void initialize();
	void run();
	void finish();

	//////////////////////////////
	//      Module callbacks	//
	//////////////////////////////
	void handleInput(int key, int action);
};

#endif // APPLICATION_HPP