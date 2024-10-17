//
// Created by laflame on 17.10.24.
//

#include "ticTacToeLogic.h"

#include <iostream>
#include <ostream>

namespace ticTacToeGame {
    ticTacToeLogic::ticTacToeLogic(QLabel* label) : currentPlayer("X"), label(label), field{} {
    }

    void ticTacToeLogic::handleClick(QPushButton *button) {
        if(label->text().contains("wins") || button->text().contains("X") || button->text().contains("O")) {
            return;
        }

        const int x = button->property("row").toInt();
        const int y = button->property("column").toInt();

        button->setText(currentPlayer.c_str());
        field[x][y] = currentPlayer;


        if (checkWin()) {
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            label->setText(("Player " + currentPlayer + " wins!").c_str());
        }

        currentPlayer = currentPlayer == "X" ? "O" : "X";
    }

    bool ticTacToeLogic::checkWin() const {
        const auto winningCombinations = std::array<std::array<std::string, 3>, 8>
        {
            std::array<std::string, 3>{field[0][0], field[0][1], field[0][2]},
            std::array<std::string, 3>{field[1][0], field[1][1], field[1][2]},
            std::array<std::string, 3>{field[2][0], field[2][1], field[2][2]},
            std::array<std::string, 3>{field[0][0], field[1][0], field[2][0]},
            std::array<std::string, 3>{field[0][1], field[1][1], field[2][1]},
            std::array<std::string, 3>{field[0][2], field[1][2], field[2][2]},
            std::array<std::string, 3>{field[0][0], field[1][1], field[2][2]},
            std::array<std::string, 3>{field[0][2], field[1][1], field[2][0]}
        };


        for (auto &combination: winningCombinations) {
            if (combination[0] == combination[1] && combination[1] == combination[2] && combination[0] != "") {
                return true;
            }
        }

        for (auto &row: field) {
            for (auto &cell: row) {
                if (cell.empty()) {
                    return false;
                }
            }
        }

        label->setText("Nobody Wins!");

        return false;
    }
}
