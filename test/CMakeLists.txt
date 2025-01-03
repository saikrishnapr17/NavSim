# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(NavSim)

set(CMAKE_CXX_STANDARD 17)

# Add executable
add_executable(NavSim src/main.cpp src/Graph.cpp src/MessageSystem.cpp)

# Google Test setup
enable_testing()
add_subdirectory(test)