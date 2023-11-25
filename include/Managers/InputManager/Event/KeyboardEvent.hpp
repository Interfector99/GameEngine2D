#ifndef KEYBOARDEVENT_HPP
#define KEYBOARDEVENT_HPP

// Interface classes
#include "Managers/InputManager/Event/IEvent.hpp"

class KeyboardEvent : public IEvent
{
private:
    int key;
    Action action;
public:
    KeyboardEvent(int key, Action action);

    Type getEventType() override;
    int getKey();
    Action getAction();
};

#endif // KEYBOARDEVENT_HPP