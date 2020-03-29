cmake_minimum_required(VERSION 3.15)
project(Parte2)

set(SFML_STATIC_LIBRARIES TRUE)
set(CMAKE_CXX_STANDARD 17)
find_package(SFML 2.5.1 COMPONENTS system window graphics)

add_executable(Parte2 main.cpp Tipos.h simulacion.h CRobot.cpp CRobot.h Coord.h CObstaculo.h CObjeto.h CMenu.cpp CMenu.h CBattleBox.cpp CBattleBox.h)
target_link_libraries(Parte2 sfml-system sfml-window sfml-graphics -static)



