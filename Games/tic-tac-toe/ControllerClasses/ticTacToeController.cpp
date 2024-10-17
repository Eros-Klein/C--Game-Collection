//
// Created by laflame on 17.10.24.
//

#include "ticTacToeController.h"

#include <iostream>

namespace ticTacToeGame {
    ticTacToeController::ticTacToeController()
    : gameInterface()
    {
        std::cout << "Controller initialized!" << std::endl;
    }

    void ticTacToeController::startGame() {
        ticTacToeController::gameInterface.updateField();
    };
}
