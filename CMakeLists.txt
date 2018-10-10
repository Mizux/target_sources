cmake_minimum_required(VERSION 3.5)

include(CTest)

project(Plop VERSION 1.0 LANGUAGES CXX)

set(CMAKE_VERBOSE_MAKEFILE ON)

option(BUILD_SHARED_LIBS "Build shared libraries(.so or .dyld)." ON)

add_subdirectory(libA)
add_subdirectory(libHO)
add_subdirectory(App)
