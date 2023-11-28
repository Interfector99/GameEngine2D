#include "Modules/InputModule/InputModule.hpp"

//////////////////////////////
// Constructors/Destructors //
//////////////////////////////
InputModule::InputModule()
{
	p_Window = NULL;
	std::cout << "	InputModule instance created" << std::endl;
}

InputModule::~InputModule()
{
	std::cout << "	InputModule instance destroyed" << std::endl;
}

//////////////////////////////
//         Life cycle		//
//////////////////////////////
void InputModule::initialize(GLFWwindow* p_Window)
{
	this->p_Window = p_Window;
	glfwSetKeyCallback(p_Window, [](GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		InputModule* module = static_cast<InputModule*>(glfwGetWindowUserPointer(window));
		if (module) module->handleInput(key, action);
	});
	glfwSetWindowUserPointer(p_Window, static_cast<void*>(this));
	std::cout << "	InputModule instance initialized" << std::endl;
}

void InputModule::pollEvents()
{
	glfwPollEvents();
}

void InputModule::finish()
{
	std::cout << "	InputModule instance finished" << std::endl;
}

//////////////////////////////
//      Input callback		//
//////////////////////////////
void InputModule::setHandleInputCallback(const std::function<void(int, int)>& callback)
{
	f_onInput = callback;
}

void InputModule::handleInput(int key, int action)
{
	std::cout << "Application received input: Key = " << key << ", Action = " << action << std::endl;
	if (key == GLFW_KEY_Q && action == GLFW_PRESS)
	{
		if (f_onInput) f_onInput(key, action);
	}
}
