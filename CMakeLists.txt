cmake_minimum_required(VERSION 3.10)
project(miTiendita)

set(CMAKE_CXX_STANDARD 17)

include_directories(inc)
file(GLOB SOURCES "src/*.cpp")

add_executable(parcialito ${SOURCES})