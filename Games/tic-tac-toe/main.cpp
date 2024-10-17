#include "ControllerClasses/ticTacToeController.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    ticTacToeGame::ticTacToeController controller;

    controller.startGame();

    return app.exec();
}
