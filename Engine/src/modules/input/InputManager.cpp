#include "modules/input/InputManager.hpp"
#include "ShamanEngine2D.hpp"

//////////////////////////////////
//	Constructor and Destructor	//
//////////////////////////////////
InputManager::InputManager()
{
	p_Parent = nullptr;
	p_Window = nullptr;
}

InputManager::~InputManager()
{

}

//////////////////////////////////
// 			Functions           //
//////////////////////////////////
void InputManager::initialize(ShamanEngine2D* parent, GLFWwindow* window)
{
	this->p_Parent = parent;
	this->p_Window = window;
}

void InputManager::update()
{
	handleKeyboardInput();
	handleMouseInput();
	handleJoystickInput();
}

void InputManager::shutdown()
{

}

//////////////////////////////////
// 	  Handle Input Functions    //
//////////////////////////////////
void InputManager::handleKeyboardInput()
{
	if (glfwGetKey(p_Window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
	{
		p_Parent->setState(STATE::OFF);
	}
}
void InputManager::handleMouseInput()
{

}
void InputManager::handleJoystickInput()
{

}