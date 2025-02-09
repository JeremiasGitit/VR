#include "chef.h"

Chef::Chef()
{
    cout << "chef defaultkonstruktori, ei nimeä"
         << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "chef konstruktori, kokin nimi: "
         << chefName
         <<endl;
}

Chef::~Chef()
{
    cout << "chef destruktori"
         << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    int annoksia = 0;
    cout << "Aineksia: "
         << aines
         << endl;

    annoksia = aines/5;


    return annoksia;
    //1. Salaatti yksi annos 5 ainesta 2. palauttaa annosten määrän
}

int Chef::makeSoup(int aines)
{
    int Kannoksia = 0;
    cout << "Aineksia: "
         << aines
         << endl;

    Kannoksia = aines/3;


    return Kannoksia;
}
