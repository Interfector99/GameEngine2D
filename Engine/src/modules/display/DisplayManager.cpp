#include "modules/display/DisplayManager.hpp"
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
	this->loadConfig();
	this->p_Parent = parent;
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_REFRESH_RATE, m_Config.refreshRate);
	glfwWindowHint(GLFW_RESIZABLE, m_Config.resizable);
	glfwWindowHint(GLFW_DECORATED, m_Config.decorated);
	p_Window = glfwCreateWindow(m_Config.width, m_Config.height, "GameEngine2D", NULL, NULL);
	if (p_Window == NULL)
	{
		throw GLFWException("p_Window is null");
	}

	glfwMakeContextCurrent(p_Window);
}

void DisplayManager::update()
{

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

//////////////////////////////////
// 		  Inner Functions       //
//////////////////////////////////
void DisplayManager::loadConfig()
{
	std::fstream file;
	file.open(configPath, std::ios::in);
	if (file.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			std::string key = line.substr(0, line.find_first_of(':'));
			std::string value = line.substr(line.find_first_of(':') + 2, line.length());
			if (key == "full_screen")
			{
				m_Config.fullScreen = Parsing::string_to_bool(value);
			}
			else if (key == "width")
			{
				m_Config.width = std::stoi(value);
			}
			else if (key == "height")
			{
				m_Config.height = std::stoi(value);
			}
			else if (key == "refresh_rate")
			{
				m_Config.refreshRate = std::stoi(value);
			}
			else if (key == "resizeable")
			{
				m_Config.resizable = Parsing::string_to_bool(value);
			}
			else if (key == "decorated")
			{
				m_Config.decorated = Parsing::string_to_bool(value);
			}
		}
	}
	else
	{
		throw FileException("Error with config file: " + configPath);
	}
}