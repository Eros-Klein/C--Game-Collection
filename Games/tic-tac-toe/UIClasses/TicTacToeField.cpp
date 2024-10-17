//
// Created by laflame on 16.10.24.
//

#include "TicTacToeField.h"
#include "TicTacToeField.h"

#include <iostream>
#include <ostream>
#include <QPushButton>
#include <QLabel>
#include <QFont>

namespace ticTacToeGame {
    TicTacToeUI::TicTacToeUI(): label(nullptr), gameLogic(nullptr) {
        std::cout << "UI initialized!" << std::endl;

        label = new QLabel("Tic Tac Toe", &window);

        gameLogic = ticTacToeLogic(label);

        window.resize(500, 500);
        window.setWindowTitle("Tic Tac Toe");
    }

    void TicTacToeUI::updateField() {
        int y = 100;

        QFont font("Arial", 20, QFont::Bold);

        label->move(200, 50);
        label->resize(100, 50);
        label->setAlignment(Qt::AlignCenter);
        label->show();

        for (int i = 0; i < std::size(gameLogic.field); i++) {
            int x=100;
            for (int j = 0; j < std::size(gameLogic.field[i]); j++) {
                auto *button = new QPushButton(" ", &window);

                button->resize(100, 100);
                button->move(x, y);
                button->setFont(font);

                button->setProperty("row", i);
                button->setProperty("column", j);

                button->show();
                // On click of the button, call handleClick
                QObject::connect(button, &QPushButton::clicked, [button, this] {
                    gameLogic.handleClick(button);
                });

                x += 100;
            }
            y += 100;
        }

        window.show();
    }

}
