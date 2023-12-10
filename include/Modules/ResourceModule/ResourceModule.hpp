#ifndef RESOURCEMODULE_HPP
#define RESOURCEMODULE_HPP

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class ResourceModule
{
private:
public:
	//////////////////////////////
	//	 Data for the modules	//
	//////////////////////////////
	std::string config;


	//////////////////////////////
	// Constructors/Destructors //
	//////////////////////////////
	ResourceModule();
	~ResourceModule();

	//////////////////////////////
	//         Life cycle		//
	//////////////////////////////
	void initialize();
	void readDisplayConfig();
	void finish();
};
#endif // RESOURCEMODULE_HPP