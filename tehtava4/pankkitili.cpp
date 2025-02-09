#include "pankkitili.h"

pankkitili::pankkitili() {}

bool pankkitili::withdraw(double summa)
{
    cout<< "Nosto ennen saldo = " << saldo << " summa = "<< summa << endl;
    if(summa < 0)
    {
        cout<<"summa negatiivinen"<<endl;
        return false;
    } else if (summa > saldo)
    {
        cout<<"summa suurempi kuin saldo"<<endl;
        return false;
    } else
    {
        //päivitetään saldo saldosta vähennetään summa
        saldo = saldo - summa;
        cout << "jalkeensaldo = "<< saldo << endl;
        return true;
    }

}

bool pankkitili::deposit(double summa)
{
    cout<< "Talletus ennen saldo = " << saldo << " summa = "<< summa << endl;
    if(summa < 0)
    {
        cout<<"summa negatiivinen"<<endl;
        return false;
    }else
    {
        //päivitetään saldo saldosta vähennetään summa
        saldo = saldo + summa;
        cout << "jalkeensaldo = "<< saldo << endl;
        return true;
    }
}

double pankkitili::getBalance()
{
    return saldo;
}

pankkitili::pankkitili(string name)
{
    omistaja = name;
    //cout << "Pankkitili luotu asiakkaalle: " << omistaja << endl;
}

