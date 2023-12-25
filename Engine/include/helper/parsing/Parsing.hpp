#ifndef PARSING_HPP
#define PARSING_HPP

#include <string>

class Parsing
{
public:
	static bool string_to_bool(const std::string& s)
	{
		return s != "false";
	}
};

#endif // PARSING_HPP