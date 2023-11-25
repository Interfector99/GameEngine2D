#include "Managers/InputManager/Event/MouseButtonEvent.hpp"

MouseButtonEvent::MouseButtonEvent(double x, double y, Button button) : MouseEvent(x, y) 
{
	this->button = button;
}

Type MouseButtonEvent::getEventType() 
{ 
	return Type::MouseButton; 
}

Button MouseButtonEvent::getButton() 
{ 
	return button; 
}