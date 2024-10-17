//
// Created by laflame on 16.10.24.
//

#ifndef TICTACTOEFIELD_H
#define TICTACTOEFIELD_H
#include <qwidget.h>
#include <qlabel.h>

#include "../LogicClasses/ticTacToeLogic.h"

namespace ticTacToeGame {

    class TicTacToeUI {
    private:
        QLabel *label;
        ticTacToeLogic gameLogic;
        QWidget window;
    public:
        TicTacToeUI();
        void updateField();
    };

}

#endif
