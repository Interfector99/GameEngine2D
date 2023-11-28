#ifndef GRAPHICSMODULE_HPP
#define GRAPHICSMODULE_HPP

#include <GLFW/glfw3.h>

#include <iostream>

class GraphicsModule
{
private:
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	GraphicsModule();
	~GraphicsModule();

	//////////////////////////////
	//         Life cycle		//
	//////////////////////////////
	void initialize();
	void renderGraphics();
	void finish();
};
#endif // GRAPHICSMODULE_HPP