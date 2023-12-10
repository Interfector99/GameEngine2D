#ifndef NETWORKMODULE_HPP
#define NETWORKMODULE_HPP

#include <eos_sdk.h>

#include <iostream>

class NetworkModule
{
private:

public:
	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	NetworkModule();
	~NetworkModule();

	//////////////////////////////
	//         Life cycle		//
	//////////////////////////////
	void initialize();
	void update();
	void finish();
};
#endif // INPUTMODULE_HPP