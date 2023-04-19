#include <iostream>
#include "file.h"
#include <string>
using namespace std;

void printX()
{
    std::cout << "Friend!" << endl;
}

void funkcja(Sample &a){
a.a=1;


}



void child(child_myClass &cos)
{
    cout << "a" << endl;
    cin >> cos.a;
    cout << "b" << endl;
    cin >> cos.b;
    cout << "c" << endl;
    cin >> cos.c;
    cout << "d" << endl;
    cin >> cos.d;
}




void wypisz(Sample &siema)
{
    cin >> siema.a;
}



// &ab dzialamy na referencji
void printSample(Sample &ab)
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
    // tworzenie obiektu
    // wg klasy Sample
    // Klasa jest gotowym wzorcem obiektu

    printSample(s1);
    wypisz(s1);

    return 0;
}