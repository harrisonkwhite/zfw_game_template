cmake_minimum_required(VERSION 3.28)
project(untitled_game C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(zeta_framework)

add_executable(untitled_game
    src/game.c
)

target_include_directories(untitled_game PRIVATE zeta_framework/include)
target_link_libraries(untitled_game PRIVATE zeta_framework)

set_target_properties(untitled_game PROPERTIES
    VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
)
