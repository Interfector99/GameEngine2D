#include "Modules/DisplayManager.hpp"
#include "ShamanEngine2D.hpp"

//////////////////////////////////
//	Constructor and Destructor	//
//////////////////////////////////
DisplayManager::DisplayManager()
{
	p_Parent = nullptr;
	p_Window = nullptr;
}
DisplayManager::~DisplayManager()
{

}

//////////////////////////////////
// 			Functions           //
//////////////////////////////////
void DisplayManager::initialize(ShamanEngine2D* parent)
{
	this->p_Parent = parent;
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	p_Window = glfwCreateWindow(800, 800, "GameEngine2D", NULL, NULL);
	if (p_Window == NULL)
	{
		glfwTerminate();
	}

	glfwMakeContextCurrent(p_Window);
}

void DisplayManager::update()
{

	glfwPollEvents();
	glfwSwapBuffers(p_Window);
}

void DisplayManager::shutdown()
{
	glfwTerminate();
}

//////////////////////////////////
// 		Setters and Getters     //
//////////////////////////////////
GLFWwindow* DisplayManager::getWindow() const
{
	return p_Window;
}