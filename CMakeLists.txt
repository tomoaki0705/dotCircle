# minimum requirement
cmake_minimum_required(VERSION 3.6)

# solution
project(dotCircle)

SET(TARGET_NAME generateDot)

# build TARGET_NAME from source code
add_executable(${TARGET_NAME} main.cpp)
