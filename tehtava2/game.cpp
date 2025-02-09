#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

game::game(int mn)
{
    maxNumber = mn;

    srand(std::time(0));

    cout << "maxNumber "
    << maxNumber
    << endl;
}

game::~game()
{
    cout << "Destruktori toimii"<<endl;
}

void game::play()
{
    randomNumber = (rand()%maxNumber)+1;
    numOfGuesses = 0;
    bool stayInLoop = true;
    while(stayInLoop)
    {


    cout<<"Give your guess between 1-"<<maxNumber<<endl;
    cin>>playerGuess;
    numOfGuesses++;
    if(playerGuess == randomNumber)
    {
        cout<<"Arvasit oikein luku = "<<playerGuess<<endl;
        stayInLoop = false;
        printGameResult();
    }
    else if(playerGuess<randomNumber)
    {
        cout<<"Lukusi on liian pieni"<<endl;
        printGameResult();
    }
    else
    {
        cout<<"Lukusi on liian suuri"<<endl;
        printGameResult();
    }
}
}
void game::printGameResult()
{
    cout << "Your result = "<<playerGuess<<endl;
    cout << "random number = "<<randomNumber<<endl;
    cout << "Number of guesse = "<<numOfGuesses<<endl;

}
