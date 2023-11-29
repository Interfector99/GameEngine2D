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
	// Constructors/Destructors //
	//////////////////////////////
	ResourceModule();
	~ResourceModule();

	//////////////////////////////
	//         Life cycle		//
	//////////////////////////////
	void initialize();
	void readDisplayConfig(std::string& filePath);
	void finish();
};
#endif // RESOURCEMODULE_HPP