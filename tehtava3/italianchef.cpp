#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "ItalianChef defaultkonstruktori"
         << endl;
}

ItalianChef::ItalianChef(string name)
    :Chef(name)
{
    cout << "ItalianChef konstruktori"
        << ", kokin nimi "
        << name
         << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef destruktori"
         << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    flour = f;
    water = w;
    if (pw == "pizza")
    {
        int pizzas = makepizza();
        cout << "Pizzas made: "
             << pizzas
             << endl;
        return true;
    } else
    {
        return false;
    }
}

int ItalianChef::makepizza()
{
    int pizzas = 0;
    if(flour > water) {
        pizzas =  water / 5;
        return pizzas;
    } else {
        pizzas = flour / 5;
        return pizzas;
    }
}
