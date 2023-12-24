#ifndef SHAMANENGINE2D_HPP
#define SHAMANENGINE2D_HPP

#include "Modules/DisplayManager.hpp"
#include "Modules/InputManager.hpp"
#include "Modules/GraphicsManager.hpp"

#include <iostream>

enum class STATE
{
	OFF,
	RUNNING,
};

class ShamanEngine2D
{
private:
	STATE m_state;

	DisplayManager m_DisplayManager;
	InputManager m_InputManager;
	GraphicsManager m_GraphicsManager;
public:
	//////////////////////////////////
	//	Constructor and Destructor	//
	//////////////////////////////////
	ShamanEngine2D();
	~ShamanEngine2D();

	//////////////////////////////////
	// 			Functions           //
	//////////////////////////////////
	void initialize();
	void run();
	void shutdown();

	//////////////////////////////////
	// 		Setters and Getters     //
	//////////////////////////////////
	void setState(STATE state);
};

#endif // SHAMANENGINE2D_HPP