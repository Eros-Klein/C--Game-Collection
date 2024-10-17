//
// Created by laflame on 17.10.24.
//

#ifndef TICTACTOECONTROLLER_H
#define TICTACTOECONTROLLER_H
#include "../UIClasses/TicTacToeField.h"

namespace ticTacToeGame {

class ticTacToeController {
private:
    TicTacToeUI gameInterface;
public:
    ticTacToeController();
    void startGame();
};

} // ticTacToeGame

#endif
