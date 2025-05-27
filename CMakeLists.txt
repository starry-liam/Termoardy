cmake_minimum_required(VERSION 3.10)
project(Termoardy)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Find all .cpp files in the src/ directory
file(GLOB SOURCES "src/*.cpp")

# Create the executable from the .cpp files
add_executable(Termoardy ${SOURCES})