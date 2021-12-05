#include "header.hpp"

int main() 
{
    HangmanModel model;
    HangmanView view;
    HangmanController controller;

    controller.setMovie(model);

    while (controller.checkIfGameIsOver(model)) {

        controller.updateHangmanDrawing(model);
        view.displayHangman(model);
        view.displayCurrentProgress(model);
        view.displayUsedLetters(model);
        controller.userEntry(model);
        controller.updateMovieStrings(model);
    }

    controller.updateHangmanDrawing(model);
    view.displayHangman(model);
    view.displayUsedLetters(model);
    view.displayCurrentProgress(model);
    view.displayCorrect(model);
}