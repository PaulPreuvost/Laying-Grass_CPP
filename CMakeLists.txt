cmake_minimum_required(VERSION 3.26)
project(LayingGrass)

set(CMAKE_CXX_STANDARD 17)

# Liste des sources
set(SOURCES
        main.cpp
        includes/Tile.cpp
        includes/TileManagement.cpp
        includes/PlayerInfo.cpp
        includes/GameFunctions.cpp
)

# Création de l'exécutable
add_executable(LayingGrass ${SOURCES})
