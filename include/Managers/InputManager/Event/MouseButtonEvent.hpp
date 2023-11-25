#ifndef MOUSEBUTTONEVENT_HPP
#define MOUSEBUTTONEVENT_HPP

// Interface classes
#include "Managers/InputManager/Event/MouseEvent.hpp"

class MouseButtonEvent : public MouseEvent 
{
private:
    Button button;
public:
    MouseButtonEvent(double x, double y, Button button);

    Type getEventType() override;
    Button getButton();
};

#endif // MOUSEBUTTONEVENT_HPP