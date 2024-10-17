//
// Created by laflame on 17.10.24.
//

#ifndef TICTACTOELOGIC_H
#define TICTACTOELOGIC_H
#include <QLabel>
#include <QPushButton>

namespace ticTacToeGame {

class ticTacToeLogic {
private:
    std::string currentPlayer;
    bool checkWin() const;
    QLabel *label;
public:
    ticTacToeLogic(QLabel *label);
    std::string field[3][3];
    void handleClick(QPushButton *button);
};

} // ticTacToeGame

#endif
