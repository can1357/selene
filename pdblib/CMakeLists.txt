cmake_minimum_required(VERSION 3.17)
project(pdblib)

# Header only interface.
add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE includes)

# Add requirements
add_subdirectory("$ENV{CxxLibraries}xstd" "xstdbin")
target_link_libraries(${PROJECT_NAME} xstd)
add_subdirectory("$ENV{CxxLibraries}linux-pe" "linuxpebin")
target_link_libraries(${PROJECT_NAME} linux-pe)

# C++20 requirement.
target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_20)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)