#ifndef INPUTMANAGER_HPP
#define INPUTMANAGER_HPP

class ShamanEngine2D;

#include <GLFW/glfw3.h>

class InputManager
{
private:
    ShamanEngine2D* p_Parent;
    GLFWwindow* p_Window;

public:
    //////////////////////////////////
    //	Constructor and Destructor	//
    //////////////////////////////////
    InputManager();
    ~InputManager();

    //////////////////////////////////
    // 			Functions           //
    //////////////////////////////////
    void initialize(ShamanEngine2D* parent, GLFWwindow* window);
    void update();
    void shutdown();
private:
    //////////////////////////////////
    // 	  Handle Input Functions    //
    //////////////////////////////////
    void handleKeyboardInput();
    void handleMouseInput();
    void handleJoystickInput();
};

#endif // INPUTMANAGER_HPP

