#pragma once
#ifndef DISPLAYMANAGER_HPP
#define DISPLAYMANAGER_HPP

class ShamanEngine2D;

#include "helper/exception/Exception.hpp"
#include "helper/parsing/Parsing.hpp"

#include <GLFW/glfw3.h>

#include <string>
#include <fstream>

class DisplayManager
{
private:
    std::string configPath = "../../../Engine/assets/display/display.ini";
    struct config
    {
        bool fullScreen = false;
        int width = 1280;
        int height = 720;
        int refreshRate = 60;
        bool resizable = true;
        bool decorated = false;
    } m_Config;

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
private:
    //////////////////////////////////
    // 		  Inner Functions       //
    //////////////////////////////////
    void loadConfig();
};

#endif // DISPLAYMANAGER_HPP

