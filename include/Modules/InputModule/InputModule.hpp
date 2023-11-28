#ifndef INPUTMODULE_HPP
#define INPUTMODULE_HPP

#include <GLFW/glfw3.h>

#include "OIS/OIS.h"
#include "OIS/OISInputManager.h"
#include "OIS/OISException.h"
#include "OIS/OISKeyboard.h"
#include "OIS/OISMouse.h"
#include "OIS/OISJoyStick.h"
#include "OIS/OISEvents.h"

#include <iostream>
#include <functional>

class InputModule
{
private:
	GLFWwindow* p_Window;
	std::function<void(int, int)> f_onInput;
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	InputModule();
	~InputModule();

	//////////////////////////////
	//         Life cycle		//
	//////////////////////////////
	void initialize(GLFWwindow* p_Window);
	void pollEvents();
	void finish();

	//////////////////////////////
	//      Input callback		//
	//////////////////////////////
	void setHandleInputCallback(const std::function<void(int, int)>& callback);
	void handleInput(int key, int action);
};
#endif // INPUTMODULE_HPP