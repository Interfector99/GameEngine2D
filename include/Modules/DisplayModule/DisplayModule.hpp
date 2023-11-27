#ifndef DISPLAYMODULE_HPP
#define DISPLAYMODULE_HPP

#define FPS 30
#define FRAME_TARGET_TIME (1000 / FPS)

#include "Modules/IModule.hpp"

#include <GLFW/glfw3.h>

#include <iostream>
#include <vector>
#include <functional>
#include <chrono>
#include <thread>

class DisplayModule : public IModule
{
private:
	GLFWwindow* p_Window;

	std::function<void(int, int)> onInput;

	int previousFrameTime = 0;
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
	void update();
};
#endif // DISPLAYMODULE_HPP