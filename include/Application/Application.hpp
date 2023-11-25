#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "IApplication.hpp"

#include <iostream>

class Application : public IApplication
{
private:
public:
	Application();
	void run() override;
	void destroy() override;
};

#endif // APPLICATION_HPP