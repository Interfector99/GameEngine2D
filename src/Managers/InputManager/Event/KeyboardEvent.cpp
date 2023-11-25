#include "Managers/InputManager/Event/KeyboardEvent.hpp"

KeyboardEvent::KeyboardEvent(int key, Action action)
{
	this->key = key;
	this->action = action;
}

Type KeyboardEvent::getEventType()
{ 
	return Type::Keyboard; 
}

int KeyboardEvent::getKey()
{ 
	return key; 
}
Action KeyboardEvent::getAction()
{ 
	return action; 
}