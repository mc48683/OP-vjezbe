#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <fstream>
#include <time.h>

using namespace std;


class HangmanModel 
{
public:
    string movie;
    string guessMovie;
    int lives = 7;
    string current_hangman;
    vector<char> used_letters;
};

class HangmanView 
{
public:
    void displayHangman(HangmanModel model);
    void displayCurrentProgress(HangmanModel model);
    void displayUsedLetters(HangmanModel model);
    void displayCorrect(HangmanModel model);
};

class HangmanController 
{
public:
    void setMovie(HangmanModel& model);
    void userEntry(HangmanModel& model);
    bool checkLetter(HangmanModel& model, char s);
    void updateLives(HangmanModel& model, bool mistake);
    void updateMovieStrings(HangmanModel& model);
    void updateHangmanDrawing(HangmanModel& model);
    bool checkIfGameIsOver(HangmanModel& model);
};