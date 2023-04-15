#include <iostream>

// #define log(x) std::cout << x << std::endl
using namespace std;

class Ksiazka
{ // ksiazka to obiejkt
public:
    int strony; // atrybuty klasy
    char autor;

    void otworz();
};

class Auto
{
public:
    string marka;
    string model;
    unsigned int rocznik;
    unsigned int przebieg;

    void wczytaj();
    void wypisz();
};

void Ksiazka::otworz()
{
    std::cout << "Otwieram.." << std::endl;
}

void Auto::wczytaj()
{
    std::cout << "Wczytuje.."  <<std::endl;
}

void Auto::wypisz()
{
    std::cout << "Wypisuje.." << std::endl;
}

int main()
{

    Auto peugot;
    peugot.marka = "peugot";
    peugot.model = "508";
    peugot.rocznik=2004;
    peugot.przebieg=196542;

string a;
cout << "Podaj nazwe obiektu" << endl;
 cin >> a;

  if (a.compare("peugot") == 0) {
    Auto car;
    car.wczytaj();
  }

    /*
        int a = 0;
        int b = 0;

        cout << "Ile masz a" << endl;

        cin >> a;

        cout << "Ile masz b" << endl;

        cin >> b;

        int &a_ref = a;

        cout << "a:" << a << endl
             << "b:" << b << endl;
     */
    // podajemy jakiego typu jest to odniesienie
    // nazwa odniesienia jest ze slowa "reference"
    //  odniesienie odnosi się do zmiennej b

    /*
    int b=5;
    int& refb=b;
    refb=232;

     */

    return 0;
}