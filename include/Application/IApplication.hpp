#ifndef IAPPLICATION_HPP
#define IAPPLICATION_HPP

class IApplication
{
private:
protected:
public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	virtual ~IApplication() = default;

	//////////////////////////////
	//          Pipeline		//
	//////////////////////////////
	virtual void executePipeline() = 0;
	virtual void initialize() = 0;
	virtual void run() = 0;
	virtual void finish() = 0;

	//////////////////////////////
	//      Module callbacks	//
	//////////////////////////////
	virtual void handleInput(int key, int action) = 0;
};

#endif // IAPPLICATION_HPP