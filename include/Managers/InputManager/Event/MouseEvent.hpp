#ifndef MOUSEEVENT_HPP
#define MOUSEEVENT_HPP

// Interface classes
#include "Managers/InputManager/Event/IEvent.hpp"

class MouseEvent : public IEvent 
{
private:
    double mouseX, mouseY;
public:
    MouseEvent(double x, double y);

    Type getEventType() override;
    double getX();
    double getY();
};

#endif // MOUSEEVENT_HPP