#include <iostream>
#include "file.h"
#include <string>
using namespace std;

void printX()
{
    std::cout << "Friend!" << endl;
}



// ab = dzialamy nakopii
// &ab dzialamy na referencji
void printSample(Sample ab)
{
    cout << "a" << endl;
    cin >> ab.a;
    cout << "b" << endl;
    cin >> ab.b;
    cout << "c" << endl;
    cin >> ab.c;
}

void wypisz(Sample wypisz)
{
    cout << "--------" << endl;

    cout << wypisz.a << endl;
    cout << wypisz.b << endl;
    cout << wypisz.c << endl;
}

int main()
{

    Sample s1;
//tworzenie obiektu 
//wg klasy Sample
//Klasa jest gotowym wzorcem obiektu




    printSample(s1);
    wypisz(s1);

    /*
        Sample s1;

        s1.get();

        printX();
     */
    return 0;
}