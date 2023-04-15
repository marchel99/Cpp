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
    std::cout << "Wczytuje.." << std::endl;
}

void Auto::wypisz()
{
    std::cout << "Wypisuje.." << std::endl;
}



int main()
{

string userinput;
cout<<"Podaj nazwe pojazdu"<<endl;
cin>>userinput;

while (userinput!=NULL)
{

//do sth
}





    return 0;
}