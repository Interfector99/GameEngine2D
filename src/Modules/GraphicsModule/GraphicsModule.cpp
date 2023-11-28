#include "Modules/GraphicsModule/GraphicsModule.hpp"

//////////////////////////////
// Constructors/Destructors //
//////////////////////////////
GraphicsModule::GraphicsModule()
{
	std::cout << "	GraphicsModule instance created" << std::endl;
}

GraphicsModule::~GraphicsModule()
{
	std::cout << "	GraphicsModule instance destroyed" << std::endl;
}

//////////////////////////////
//         Life cycle		//
//////////////////////////////
void GraphicsModule::initialize()
{
	std::cout << "	GraphicsModule instance initialized" << std::endl;
}

void GraphicsModule::renderGraphics()
{

}

void GraphicsModule::finish()
{
	std::cout << "	GraphicsModule instance finished" << std::endl;
}
