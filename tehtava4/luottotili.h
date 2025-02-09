#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

class Luottotili : public pankkitili
{
public:
    Luottotili();
    Luottotili(string o, double lr);

    virtual bool deposit(double summa) override;
    virtual bool withdraw(double summa) override;

protected:

    double luottoRaja = 1000;
};

#endif // LUOTTOTILI_H
