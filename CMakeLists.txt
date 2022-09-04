cmake_minimum_required(VERSION 3.21)
project(cola02)

set(CMAKE_CXX_STANDARD 14)

add_executable(cola02 main.cpp Nodo.h Lista.h Persona.cpp ColaLista.cpp RunTimeException.h ColaLista.h Persona.h)
