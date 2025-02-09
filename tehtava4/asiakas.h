#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "pankkitili.h"
#include "Luottotili.h"

class Asiakas
{
public:
   // Asiakas();

    Asiakas(string n, double lr);
    string getNimi();

    void showSaldo();

    bool talletus(double summa);
    bool nosto(double summa);

    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);

    bool tiliSiirto(double summa, Asiakas &saaja);

private:
    string nimi;
    pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
