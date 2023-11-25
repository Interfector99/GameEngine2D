#ifndef IAPPLICATION_HPP
#define IAPPLICATION_HPP

enum STATE
{
	ON,
	OFF
};

class IApplication
{
protected:
	STATE state;
public:
	// IApplication();
	virtual void run() = 0;
	virtual void destroy() = 0;
};

#endif // IAPPLICATION_HPP