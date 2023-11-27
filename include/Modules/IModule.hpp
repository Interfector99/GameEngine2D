#ifndef IMODULE_HPP
#define IMODULE_HPP

class IModule
{
private:
protected:
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	virtual ~IModule() = default;

	//////////////////////////////
	//          Pipeline		//
	//////////////////////////////
	virtual void initialize() = 0;
	virtual void finish() = 0;
};

#endif // IMODULE_HPP