#include "Modules/InputModule/InputModule.hpp"

//////////////////////////////
// Constructors/Destructors //
//////////////////////////////
InputModule::InputModule()
{
	std::cout << "	InputModule instance created" << std::endl;
}

InputModule::~InputModule()
{
	std::cout << "	InputModule instance destroyed" << std::endl;
}

//////////////////////////////
//          Pipeline		//
//////////////////////////////
void InputModule::initialize()
{
	std::cout << "	InputModule instance initialized" << std::endl;
}

void InputModule::finish()
{
	std::cout << "	InputModule instance finished" << std::endl;
}
