#ifndef INPUTMODULE_HPP
#define INPUTMODULE_HPP

#include "Modules/IModule.hpp"

#include "OIS/OIS.h"
#include "OIS/OISInputManager.h"
#include "OIS/OISException.h"
#include "OIS/OISKeyboard.h"
#include "OIS/OISMouse.h"
#include "OIS/OISJoyStick.h"
#include "OIS/OISEvents.h"

#include <iostream>
#include <vector>
#include <sstream>
#include <functional>

class InputModule : public IModule
{
private:
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	InputModule();
	~InputModule() override;

	//////////////////////////////
	//          Pipeline		//
	//////////////////////////////
	void initialize() override;
	void finish() override;
};
#endif // INPUTMODULE_HPP