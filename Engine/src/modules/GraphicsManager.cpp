#include "Modules/GraphicsManager.hpp"
#include "ShamanEngine2D.hpp"

//////////////////////////////////
//	Constructor and Destructor	//
//////////////////////////////////
GraphicsManager::GraphicsManager()
{
	p_Parent = nullptr;
}

GraphicsManager::~GraphicsManager()
{

}

//////////////////////////////////
// 			Functions           //
//////////////////////////////////
void GraphicsManager::initialize(ShamanEngine2D* parent)
{
	this->p_Parent = parent;

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
    }
}

void GraphicsManager::update()
{
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
}

void GraphicsManager::shutdown()
{

}