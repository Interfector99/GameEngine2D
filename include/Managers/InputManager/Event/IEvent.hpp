#ifndef IEVENT_HPP
#define IEVENT_HPP

class IEvent 
{
private:
protected:
    enum class Type
    {
        None = 0,
        Keyboard,
        Mouse,
        MouseButton,
        MouseMove
    };

    enum Action
    {
        Press,
        Release,
        Repeat
    };

    enum Button
    {
        Left,
        Right,
        Middle
    };
public:
    virtual ~IEvent() = default;
    virtual Type getEventType() = 0;
};

#endif // IEVENT_HPP