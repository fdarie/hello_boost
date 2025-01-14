cmake_minimum_required(VERSION 3.15)
project(HelloBoost)

# Find the Boost package using the generated CMake files
find_package(Boost REQUIRED CONFIG)

# Add the executable and link Boost libraries
add_executable(hello_boost src/main.cpp src/file_utils.cpp)
target_link_libraries(hello_boost boost::boost)
