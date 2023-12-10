#include "Modules/NetworkModule/NetworkModule.hpp"

//////////////////////////////
// Constructors/Destructors //
//////////////////////////////
NetworkModule::NetworkModule()
{
	std::cout << "	NetworkModule instance created" << std::endl;
}

NetworkModule::~NetworkModule()
{
	std::cout << "	NetworkModule instance destroyed" << std::endl;
}

//////////////////////////////
//         Life cycle		//
//////////////////////////////
void NetworkModule::initialize()
{
	std::cout << "	NetworkModule instance initialized" << std::endl;
}

void NetworkModule::update()
{
	std::cout << "	NetworkModule instance is updating" << std::endl;
}

void NetworkModule::finish()
{
	std::cout << "	NetworkModule instance finished" << std::endl;
}
