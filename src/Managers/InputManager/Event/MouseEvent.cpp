#include "Managers/InputManager/Event/MouseEvent.hpp"

MouseEvent::MouseEvent(double x, double y)
{
	mouseX = x;
	mouseY = y;
}

Type MouseEvent::getEventType() 
{ 
	return Type::Mouse; 
}

double MouseEvent::getX() 
{ 
	return mouseX; 
}

double MouseEvent::getY() 
{ 
	return mouseY; 
}