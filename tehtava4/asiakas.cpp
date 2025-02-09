#include "asiakas.h"

/*Asiakas::Asiakas()
{

}*/

Asiakas::Asiakas(string n, double lr)
    :nimi(n), kayttotili(n), luottotili(n, lr)
{
    //nimi = n;
    //cout << "Asiakas " << nimi << " on luotu" << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
 cout<<"Asiakkaan "<<nimi<< " pankkitilin saldo on "<<kayttotili.getBalance()<<endl;
 cout<<"Asiakkaan "<<nimi<<" luottotilin saldo on "<<luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double summa)
{
    cout <<"Pankkitili: asiakkaalle "<<nimi<< " talletetaan"<<endl;
bool onnistuiko = kayttotili.deposit(summa);
    if (onnistuiko == false){
    cout<< "meni pieleen"<<endl;
    }
    showSaldo();
    return onnistuiko;
}

bool Asiakas::nosto(double summa)
{
    cout <<"Pankkitili: asiakkaalle "<<nimi<< " nostetaan"<<endl;
    bool onnistuiko = kayttotili.withdraw(summa);
    if (onnistuiko == false){
        cout<< "meni pieleen"<<endl;
    }
    showSaldo();
    return onnistuiko;
}

bool Asiakas::luotonMaksu(double summa)
{
    cout <<"Luottotili: asiakas "<<nimi<< " maksaa luottoa"<<endl;
    bool onnistuiko = luottotili.deposit(summa);
    if (onnistuiko == false){
        cout<< "meni pieleen"<<endl;
    }
    showSaldo();
    return onnistuiko;
}

bool Asiakas::luotonNosto(double summa)
{
    cout <<"Luottotili: asiakas "<<nimi<< " nostaa luottoa"<<endl;
    bool onnistuiko = luottotili.withdraw(summa);
    if (onnistuiko == false){
        cout<< "meni pieleen"<<endl;
    }
    showSaldo();
    return onnistuiko;
}

bool Asiakas::tiliSiirto(double summa, Asiakas &saaja)
{
    cout <<"Pankkitili: Asiakas "<<nimi<< " siirtaa: "<<summa<< " asiakkaalle " << saaja.getNimi()<<endl;
    bool onnistuiko = kayttotili.withdraw(summa);
    if(onnistuiko == false)
    {
        cout<< "siirto meni pieleen"<<endl;

    } else if (onnistuiko == true)
    {
        saaja.talletus(summa);
        showSaldo();
    }

    return onnistuiko;
}
