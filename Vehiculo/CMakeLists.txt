cmake_minimum_required(VERSION 3.15)
project(Vehiculo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Vehiculo main.cpp CVehiculo.h CCarro.h CBote.h)