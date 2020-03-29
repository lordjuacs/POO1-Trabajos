cmake_minimum_required(VERSION 3.15)
project(PruebaSFML)

set(SFML_STATIC_LIBRARIES TRUE)
set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5.1 COMPONENTS system window graphics)
add_executable(PruebaSFML main.cpp)
target_link_libraries(PruebaSFML sfml-system sfml-window sfml-graphics -static)