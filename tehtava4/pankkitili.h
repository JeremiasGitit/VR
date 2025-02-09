#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class pankkitili
{
public:
    pankkitili();

    virtual bool withdraw(double);
    virtual bool deposit(double);
    double getBalance();
    pankkitili(string);

protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
