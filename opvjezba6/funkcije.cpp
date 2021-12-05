#include "header.hpp"

void HangmanController::setMovie(HangmanModel& model) 
{
    int i;
    srand(time(NULL));
    fstream file;
    vector<string> movies;
    file.open("movie.txt", ios::in);
    string mov;
    while (getline(file, mov))
    {
        movies.push_back(mov);
    }
    file.close();
    model.movie = movies[rand() % movies.size()];
    for (i = 0; i < model.movie.size(); i++) {
        if (model.movie[i] == ' ')
        {
            model.guessMovie.push_back(' ');
        }
        else 
        {
            model.guessMovie.push_back('_');
        }
    }
}

void HangmanController::updateLives(HangmanModel& model, bool error) 
{
    if (error) 
        model.lives--;
}

void HangmanController::updateMovieStrings(HangmanModel& model) 
{
    char letter = model.used_letters.back();
    bool error = true;
    for (int i = 0; i < model.movie.size(); i++) {
        if (model.movie[i] == letter) {
            model.guessMovie[i] = letter;
            error = false;
        }
    }
    updateLives(model, error);
}

bool HangmanController::checkLetter(HangmanModel& model, char s)
{
    for (int i = 0; i < model.used_letters.size(); i++) 
    {
        if (model.used_letters[i] == s) {
            return true;
        }
    }
    return false;
}

void HangmanController::userEntry(HangmanModel& model)
{
    char ch;
    do {
        cout << "Enter one non-used letter: " << endl;
        cin >> ch;

    } while ((!isalpha(ch)) || (checkLetter(model, ch)));
    model.used_letters.push_back(ch);    
}

void HangmanController::updateHangmanDrawing(HangmanModel& model) 
{
    int lives = model.lives;
    string head, torso_up, torso_down, r_leg, l_leg, r_hand, l_hand;
    if (lives == 6)
    {
        head = "O";
    }
    if (lives == 5)
    {
        head = "O";
        torso_up = "|";
    }
    if (lives == 4)
    {
        head = "O";
        torso_up = "|";
        l_hand = "/";
    }
    if (lives == 3)
    {
        head = "O";
        torso_up = "|";
        l_hand = "/";
        r_hand = "\\";
        torso_down = "|";
    }
    if (lives == 2)
    {
        head = "O";
        torso_up = "|";
        l_hand = "/";
        r_hand = "\\";
        torso_down = "|";
        l_leg = "/";
    }
    if (lives == 1)
    {
        head = "O";
        torso_up = "|";
        l_hand = "/";
        r_hand = "\\";
        torso_down = "|";
        l_leg = "/";
        r_leg = "\\";
    }
    string hangman = "    ________       \n"
        "    | /  |         \n"
        "    |/   " + head + "\n"
        "    |   " + l_hand + torso_up + r_hand + "\n"
        "    |    " + torso_down + "\n"
        "    |   " + l_leg + " " + r_leg + "\n"
        "    |              \n"
        "    |              \n"
        " ___|___           \n";

    model.current_hangman = hangman;
}

bool HangmanController::checkIfGameIsOver(HangmanModel& model) {

    if (model.lives==0) {
        cout << "You Lost!" << endl;
        return false;
    }

    for (int i = 0; i < model.movie.size(); i++) {
        if (model.movie[i] != model.guessMovie[i]) {
            return true;
        }
    }

    cout << "You Won!" << endl;
    return false;
}


void HangmanView::displayHangman(HangmanModel model) {
    cout << model.current_hangman << endl;
}

void HangmanView::displayCurrentProgress(HangmanModel model) {
    cout << "Current progress: " << model.guessMovie << endl;
}

void HangmanView::displayCorrect(HangmanModel model) {
    cout << "Correct movie name: " << model.movie << endl;
}

void HangmanView::displayUsedLetters(HangmanModel model) {
    cout << "Used letters: ";
    for (int i = 0; i < model.used_letters.size(); i++) {
        cout << model.used_letters[i] << " ";
    }
    cout << endl;
}
