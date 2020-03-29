cmake_minimum_required(VERSION 3.15)
project(PuntoRecta)

set(CMAKE_CXX_STANDARD 17)

add_executable(PuntoRecta main.cpp tipos.h CLinea.cpp CLinea.h CPunto.cpp CPunto.h)