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
//         Life cycle		//
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
}

void DisplayModule::finish()
{
	glfwSetWindowShouldClose(p_Window, true);
	glfwTerminate();
	std::cout << "	DisplayModule instance finished" << std::endl;
}

GLFWwindow* DisplayModule::getWindow()
{
	return p_Window;
}

void DisplayModule::updateDisplay()
{
	// Wait some time until the reach the target frame time in milliseconds
	int time_to_wait = FRAME_TARGET_TIME - (glfwGetTime()  - m_PreviousFrameTime);

	// Only delay execution if we are running too fast
	// (Gives up resources to other processes)
	if (time_to_wait > 0 && time_to_wait <= FRAME_TARGET_TIME) {
		std::this_thread::sleep_for(std::chrono::milliseconds(time_to_wait));
	}

	m_PreviousFrameTime = glfwGetTime();
}
