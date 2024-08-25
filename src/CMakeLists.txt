# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Tank90 VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable for the project
# This will compile and link the executable from the source files
add_executable(Tank90 main.cpp Tank.cpp Ammo.cpp)

# Optionally, include directories if you have headers in separate directories
# include_directories(${PROJECT_SOURCE_DIR}/include)

# Optionally, specify target-specific properties or settings
# target_compile_options(Tank90 PRIVATE -Wall -Wextra -pedantic)
