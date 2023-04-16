#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "file.h"
using namespace std;
int main()
{
    int suma_a = 0;
    int suma_b = 0;
    int suma_c = 0;
    int suma_d = 0;
    int suma_e = 0;
    int error = 0;
    Pytanie p[15];



  cout << "POCZATEK QUIZU!" << endl;
  int liczbaPytan=zliczPytania(); 
 cout << liczbaPytan << endl;


    for (int i = 1; i <= 13; i++)
    {
        do
        {

            p[i].nr_pytania = i;
            p[i].wczytaj();
            p[i].zadaj();
            p[i].sprawdz();
            system("cls");
            suma_a += p[i].ilosc_a;
            suma_b += p[i].ilosc_b;
            suma_c += p[i].ilosc_c;
            suma_d += p[i].ilosc_d;
            suma_e += p[i].ilosc_e;
            error == p[i].error;
        } while ((p[i].error == 1) || (p[i].odpowiedz.empty()));
    }
    cout << "KONIEC QUIZU!" << endl;
    cout << "____________________________________________" << endl;
    float intro = (suma_a)*2 + suma_b;
    float ekstra = (suma_e)*2 + suma_d;
    float wynik = intro + ekstra + suma_c;
    if (intro > ekstra)
        cout << "Jestes introwertykiem! " << ((intro / wynik) * 100) << "%." << endl;
    else if (ekstra > intro)
        cout << "Jestes ekstrawertykiem! " << (ekstra / wynik) * 100 << "%." << endl;
    else
        cout << "Jestes dziwakiem! " << endl;
    int d = 0;
    cin >> d;
    return 0;
}

/*
    fstream myFile;
    // korzystanie z biblioteki fstream
    myFile.open("file.txt", ios::in);

    if (myFile.is_open())
    {
        string line;
        int i = 1;
        while (getline(myFile, line))
        {

            cout << i << ": ";
            cout << line << endl;
            ++i;
        }
        myFile.close();
    }
 */

/*


    //ios czyli inpuit output stream
    myFile.open("file.txt", ios::out);
    // funkcja z dwoma argumentami
    // ios:out ponieważ chce pisać w pliku
    if (myFile.is_open())
    {
        myFile << "Hello!" << endl;
        myFile.close();
    }


 myFile.open("file.txt", ios::app);
    // funkcja z dwoma argumentami
    // ios:out ponieważ chce pisać w pliku
    if (myFile.is_open())
    {
        myFile << "Hello2!" << endl;
        myFile.close();
    }


 */
