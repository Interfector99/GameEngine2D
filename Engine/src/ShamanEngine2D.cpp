#include "ShamanEngine2D.hpp"

//////////////////////////////////
//	Constructor and Destructor	//
//////////////////////////////////
ShamanEngine2D::ShamanEngine2D()
{

}
ShamanEngine2D::~ShamanEngine2D()
{

}

//////////////////////////////////
// 			Functions           //
//////////////////////////////////
void ShamanEngine2D::initialize()
{
	m_state = STATE::OFF;
	m_DisplayManager.initialize(this);
	m_InputManager.initialize(this, m_DisplayManager.getWindow());
	m_GraphicsManager.initialize(this);
}

void ShamanEngine2D::run()
{
	m_state = STATE::RUNNING;
	while (m_state == STATE::RUNNING)
	{
		m_InputManager.update();
		m_DisplayManager.update();
		m_GraphicsManager.update();
		
	}
}
void ShamanEngine2D::shutdown()
{
	m_state = STATE::OFF;
	m_InputManager.shutdown();
	m_DisplayManager.shutdown();
	m_GraphicsManager.shutdown();
}

//////////////////////////////////
// 		Setters and Getters     //
//////////////////////////////////
void ShamanEngine2D::setState(STATE state)
{
	m_state = state;
}