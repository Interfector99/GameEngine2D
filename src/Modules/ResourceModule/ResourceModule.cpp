#include "Modules/ResourceModule/ResourceModule.hpp"

//////////////////////////////
// Constructors/Destructors //
//////////////////////////////
ResourceModule::ResourceModule()
{
	std::cout << "	ResourceModule instance created" << std::endl;
}

ResourceModule::~ResourceModule()
{
	std::cout << "	ResourceModule instance destroyed" << std::endl;
}
//////////////////////////////
//         Life cycle		//
//////////////////////////////
void ResourceModule::initialize()
{
	std::cout << "	ResourceModule instance initialized" << std::endl;
}

void ResourceModule::readDisplayConfig(std::string& filePath)
{
    std::cout << "ResourceModule instance reading display config file\n";

    // Open the file using the file path
    std::ifstream file(filePath);
    if (!file.is_open())
    {
        std::cerr << "Failed to open file: " << filePath << '\n';
        return;
    }

    std::string line;
    // Read each line from the file
    while (std::getline(file, line))
    {
        std::istringstream is_line(line);
        std::string key;
        // Extract the key from the line
        if (std::getline(is_line, key, ':'))
        {
            std::string value;
            // Extract the value from the line
            if (std::getline(is_line, value))
            {
                std::cout << "key: " << key << " value: " << value << '\n';
            }
        }
    }

    file.close();
}

void ResourceModule::finish()
{
	std::cout << "	ResourceModule instance finished" << std::endl;
}