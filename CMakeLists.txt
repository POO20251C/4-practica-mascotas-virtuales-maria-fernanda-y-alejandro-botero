cmake_minimum_required(VERSION 3.30)
project(POO)

set(CMAKE_CXX_STANDARD 20)

src/main.cpp
src/Usuario.cpp
src/Mascota.cpp
src/Habilidad.cpp

add_executable(POO main.cpp
        Usuario.cpp
        Usuario.h)
