#ifndef DISPLAYMODULE_HPP
#define DISPLAYMODULE_HPP

#define FPS 30
#define FRAME_TARGET_TIME (1 / FPS)

#include <GLFW/glfw3.h>

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>

class DisplayModule
{
private:
	GLFWwindow* p_Window;
	int m_PreviousFrameTime = 0;
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	DisplayModule();
	~DisplayModule();

	//////////////////////////////
	//      Setters/Getters		//
	//////////////////////////////
	GLFWwindow* getWindow();

	//////////////////////////////
	//         Life cycle		//
	//////////////////////////////
	void initialize();
	void updateDisplay();
	void finish();
};
#endif // DISPLAYMODULE_HPP