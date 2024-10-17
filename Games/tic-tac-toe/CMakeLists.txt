cmake_minimum_required(VERSION 3.29)
project(tic_tac_toe)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 20)

add_executable(tic_tac_toe main.cpp
        UIClasses/TicTacToeField.cpp
        UIClasses/TicTacToeField.h
        ControllerClasses/ticTacToeController.cpp
        ControllerClasses/ticTacToeController.h
        LogicClasses/ticTacToeLogic.cpp
        LogicClasses/ticTacToeLogic.h)


target_link_libraries(tic_tac_toe Qt6::Widgets)
