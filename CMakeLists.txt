cmake_minimum_required(VERSION 3.10)
project(Termoardy)

set(CMAKE_CXX_STANDARD 17)


# Find all .cpp files in the src/ directory
file(GLOB SOURCES "src/*.cpp")

# Include the header files from the include folder
include_directories(${CMAKE_SOURCE_DIR}/include)

# Create the executable from the .cpp files
add_executable(Termoardy src/main.cpp src/game.cpp src/board.cpp)