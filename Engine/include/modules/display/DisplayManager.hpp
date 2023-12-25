#pragma once
#ifndef DISPLAYMANAGER_HPP
#define DISPLAYMANAGER_HPP

class ShamanEngine2D;

#include "helper/exception/Exception.hpp"

#include <GLFW/glfw3.h>

class DisplayManager
{
private:
    ShamanEngine2D* p_Parent;
    GLFWwindow* p_Window;
public:
    //////////////////////////////////
    //	Constructor and Destructor	//
    //////////////////////////////////
    DisplayManager();
    ~DisplayManager();

    //////////////////////////////////
    // 			Functions           //
    //////////////////////////////////
    void initialize(ShamanEngine2D* parent);
    void update();
    void shutdown();

    //////////////////////////////////
    // 		Setters and Getters     //
    //////////////////////////////////
    GLFWwindow* getWindow() const;
};

#endif // DISPLAYMANAGER_HPP

