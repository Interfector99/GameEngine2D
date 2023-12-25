#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>
#include <string>

class GLFWException : public std::exception 
{
private:
	std::string error;
public:
	GLFWException(std::string error) : error(error) {}
	const char* what() const noexcept
	{ 
		return ("GLFW exception: " + error).c_str();
	}
};

class FileException : public std::exception
{
public:
	std::string error;
	FileException(std::string error) : error(error) {}
	const char* what() const noexcept
	{
		return ("File exception: " + error).c_str();
	}
};

#endif // EXCEPTIONS_HPP
