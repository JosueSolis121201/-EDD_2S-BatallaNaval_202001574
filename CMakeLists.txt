cmake_minimum_required(VERSION 3.9)
project(_EDD_2S_BatallaNaval_202001574)
set(CMAKE_CXX_STANDARD 14)


set(PROJECT_HEADERS
        ListaCircularDoble.h
        nodo.h
        )
set(PROJECT_SOURCES
        ListaCircularDoble.cpp
        nodo.cpp
        main.cpp
        )

add_executable(EDD_2S_BatallaNaval_202001574 ${PROJECT_SOURCES} ${PROJECT_HEADERS})