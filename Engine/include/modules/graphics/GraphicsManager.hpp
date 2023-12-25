#ifndef GRAPHICSMANAGER_HPP
#define GRAPHICSMANAGER_HPP

class ShamanEngine2D;

// need glfw include or else glad fails???
#include <GLFW/glfw3.h>
#include <glad/glad.h>

#include <iostream>

class GraphicsManager
{
private:
    ShamanEngine2D* p_Parent;

public:
    //////////////////////////////////
    //	Constructor and Destructor	//
    //////////////////////////////////
    GraphicsManager();
    ~GraphicsManager();

    //////////////////////////////////
    // 			Functions           //
    //////////////////////////////////
    void initialize(ShamanEngine2D* parent);
    void render();
    void shutdown();
};

#endif // GRAPHICSMANAGER_HPP

