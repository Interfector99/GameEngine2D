#ifndef GRAPHICSMANAGER_HPP
#define GRAPHICSMANAGER_HPP
// need glfw include or else glad fails???
#include <GLFW/glfw3.h>

class ShamanEngine2D;

#include "Shader.hpp"

#include <iostream>

class GraphicsManager
{
private:
    ShamanEngine2D* p_Parent;

    Shader m_Shader;

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

