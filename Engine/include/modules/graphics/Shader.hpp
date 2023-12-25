#ifndef SHADER_HPP
#define SHADER_HPP

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
private:
	unsigned int ID;
public:
	Shader();
	void initialize(const char* vertexPath, const char* fragmentPath);
	void use();
	void shutdown();

	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
private:
	void checkCompileErrors(unsigned int shader, std::string type);
};

#endif // SHADER_HPP