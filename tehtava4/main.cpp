#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    pankkitili pa ("Money Gordon");

    pa.deposit(60);
    pa.withdraw(50);

    Luottotili lr ("Gordon2", 1000);

    lr.withdraw(1000);
    lr.deposit(2000);

    Asiakas A("Aa", 1000);
    Asiakas B("Bee", 1000);

    A.talletus(500);
    B.talletus(600);

    A.luotonNosto(400);

//tilisiirto alta beelle
    A.tiliSiirto(50, B);
    B.tiliSiirto(400, A);
    return 0;
}
