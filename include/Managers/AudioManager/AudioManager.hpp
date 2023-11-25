#ifndef APP_HPP
#define APP_HPP

#include"imgui/imgui.h"
#include"imgui/imgui_impl_glfw.h"
#include"imgui/imgui_impl_opengl3.h"

#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

#include <assimp/Importer.hpp>

#include<glm/vec2.hpp>

#include<box2d/box2d.h>

#include<entt/entt.hpp>

extern "C"
{
#include "lua/lua.h"
#include "lua/lauxlib.h"
#include "lua/lualib.h"
}

class App
{
private:

public:
	App();
	void run();
	void destroy();
};

#endif // APP_HPP