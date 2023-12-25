#ifndef EXCEPTIONS_HPP_INCLUDED
#define EXCEPTIONS_HPP_INCLUDED

#include <exception>

class GLFWException : public std::exception 
{
public:
	const char* what() const noexcept 
	{ 
		return "GLFW exception!"; 
	}
};

#endif // EXCEPTIONS_HPP_INCLUDED
