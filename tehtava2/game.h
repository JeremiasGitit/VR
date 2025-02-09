#ifndef GAME_H
#define GAME_H
#include<iostream>

using namespace std;

class game
{
public:
    game(int);
    ~game();

    void play();

private:
    void printGameResult();

    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
};



#endif // GAME_H
