#include <iostream>
#include "file.h"
using namespace std;

void Pytanie::wczytaj()
{
    fstream file;
    file.open("file.txt", ios::in);

    if (file.is_open())
    {

        string line;
        int nr_linii = (nr_pytania - 1) * 6 + 1;
        int aktualny_nr = 1;

        while (getline(file, line))
        {

            if (aktualny_nr == nr_linii)
                tresc = line;
            if (aktualny_nr == nr_linii + 1)
                a = line;
            if (aktualny_nr == nr_linii + 2)
                b = line;
            if (aktualny_nr == nr_linii + 3)
                c = line;
            if (aktualny_nr == nr_linii + 4)
                d = line;
            if (aktualny_nr == nr_linii + 5)
                poprawna = line;

            aktualny_nr++;
        }
        file.close();
    }
}

void Pytanie::zadaj()
{
    cout << endl
         << tresc << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << "---------" << endl;
    cout << endl
         << "Odpowiedz";
    cin >> odpowiedz;
}

void Pytanie::sprawdz()
{

    if (odpowiedz == "a")
    {
        ilosc_a = 1;
        ilosc_b = 0;
        ilosc_c = 0;
        ilosc_d = 0;
    }
    else if (odpowiedz == "b")
    {
        ilosc_a = 0;
        ilosc_b = 1;
        ilosc_c = 0;
        ilosc_d = 0;
    }
    else if (odpowiedz == "c")
    {
        ilosc_a = 0;
        ilosc_b = 0;
        ilosc_c = 1;
        ilosc_d = 0;
    }

    else if (odpowiedz == "d")
    {
        ilosc_a = 0;
        ilosc_b = 0;
        ilosc_c = 0;
        ilosc_d = 1;
    }
    else{
  ilosc_a = 0;
        ilosc_b = 0;
        ilosc_c = 0;
        ilosc_d = 0;

    }
 
}
