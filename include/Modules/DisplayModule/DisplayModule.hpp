#ifndef DISPLAYMODULE_HPP
#define DISPLAYMODULE_HPP

#include "Modules/IModule.hpp"

#include <GLFW/glfw3.h>

#include <iostream>
#include <vector>
#include <functional>

class DisplayModule : public IModule
{
private:
	GLFWwindow* p_Window;

	std::function<void(int, int)> onInput;
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	DisplayModule();
	~DisplayModule() override;

	//////////////////////////////
	//          Pipeline		//
	//////////////////////////////
	void initialize() override;
	void finish() override;

	void setHandleInputCallback(const std::function<void(int, int)>& callback);
	void handleInput(int key, int action);
};
#endif // DISPLAYMODULE_HPP