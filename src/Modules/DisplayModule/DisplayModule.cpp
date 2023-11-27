#include "Modules/DisplayModule/DisplayModule.hpp"

//////////////////////////////
// Constructors/Destructors //
//////////////////////////////
DisplayModule::DisplayModule()
{
	std::cout << "	DisplayModule instance created" << std::endl;
}

DisplayModule::~DisplayModule()
{
	std::cout << "	DisplayModule instance destroyed" << std::endl;
}

//////////////////////////////
//          Pipeline		//
//////////////////////////////
void DisplayModule::initialize()
{
	std::cout << "	DisplayModule instance initialized" << std::endl;
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	p_Window = glfwCreateWindow(800, 800, "LearnOpenGL", NULL, NULL);
	if (p_Window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
	}
	glfwMakeContextCurrent(p_Window);

	glfwSetKeyCallback(p_Window, [](GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		DisplayModule* module = static_cast<DisplayModule*>(glfwGetWindowUserPointer(window));
		if (module) module->handleInput(key, action);
	});

	glfwSetWindowUserPointer(p_Window, this);
}

void DisplayModule::finish()
{
	glfwTerminate();
	std::cout << "	DisplayModule instance finished" << std::endl;
}

void DisplayModule::setHandleInputCallback(const std::function<void(int, int)>& callback)
{
	onInput = callback;
}

void DisplayModule::handleInput(int key, int action)
{
	if (key == GLFW_KEY_Q && action == GLFW_PRESS)
	{
		if (onInput) onInput(key, action);
	}
}
