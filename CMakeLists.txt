cmake_minimum_required (VERSION 3.12)

project ("ShamanEngine2D")

# Set engine directories and sources
set(SHAMAN_ENGINE_2D_INCLUDE_DIR "Engine/include")
set(SHAMAN_ENGINE_2D_SOURCES 
    "Engine/Main.cpp"
    "Engine/glad.c"
    "Engine/src/ShamanEngine2D.cpp")

# Set module directories and sources
file(GLOB_RECURSE MODULE_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/Engine/include/modules/**/*.hpp")
file(GLOB_RECURSE MODULE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/Engine/src/modules/**/*.cpp")

# Set helper directories and sources
file(GLOB_RECURSE HELPER_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/Engine/include/helper/**/*.hpp")
file(GLOB_RECURSE HELPER_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/Engine/src/helper/**/*.cpp")

# Set third-party directories and libraries
set(GLFW_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Engine/lib/GLFW/include")
set(GLFW_LIBRARY_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Engine/lib/GLFW/lib")

set(GLAD_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Engine/lib/GLAD/include")

# Add all source files to this project's executable.
add_executable(ShamanEngine2D 
               ${SHAMAN_ENGINE_2D_SOURCES} 
               ${MODULE_HEADERS} 
               ${MODULE_SOURCES}
               ${HELPER_HEADERS}
               ${HELPER_SOURCES})

# Include directories
target_include_directories(ShamanEngine2D PRIVATE 
                           ${SHAMAN_ENGINE_2D_INCLUDE_DIR}

                           ${GLFW_INCLUDE_DIR}
                           ${GLAD_INCLUDE_DIR})

# Include third-party directories and libraries
target_link_directories(ShamanEngine2D PRIVATE ${GLFW_LIBRARY_DIR})
target_link_libraries(ShamanEngine2D PRIVATE glfw3)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

# Set the C++ standard for the project.
set_property(TARGET ShamanEngine2D PROPERTY CXX_STANDARD 20)

# TODO: Add tests and install targets if needed.
