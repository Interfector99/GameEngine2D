#include "ShamanEngine2D.hpp"

//////////////////////////////////
//	Constructor and Destructor	//
//////////////////////////////////
ShamanEngine2D::ShamanEngine2D()
{
	e_State = STATE::OFF;
}
ShamanEngine2D::~ShamanEngine2D()
{

}

//////////////////////////////////
// 			Functions           //
//////////////////////////////////
void ShamanEngine2D::initialize()
{
	e_State = STATE::OFF;
	m_DisplayManager.initialize(this);
	m_InputManager.initialize(this, m_DisplayManager.getWindow());
	m_GraphicsManager.initialize(this);
}

void ShamanEngine2D::run()
{
	e_State = STATE::RUNNING;
	while (e_State == STATE::RUNNING)
	{
		m_InputManager.update();
		m_DisplayManager.update();
		m_GraphicsManager.render();
	}
}

void ShamanEngine2D::shutdown()
{
	e_State = STATE::OFF;
	m_GraphicsManager.shutdown();
	m_InputManager.shutdown();
	m_DisplayManager.shutdown();
}

//////////////////////////////////
// 		Setters and Getters     //
//////////////////////////////////
void ShamanEngine2D::setState(STATE state)
{
	e_State = state;
}