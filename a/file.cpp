#include <iostream>
#include "file.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Pytanie::wczytaj() // :: operator zasięgu
{
    fstream plik;
    plik.open("quiz.txt", ios::in);

    if (plik.good() == false)
    {
        cout << "Nie udalo sie otworzyc pliku!";
    }
}