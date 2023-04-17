#include <iostream>
#include "file.h"
using namespace std;

Punkt::Punkt(string n, float xx, float yy)
{

    nazwa = n;
    x = xx;
    y = yy;
}

void Punkt::wczytaj()
{

    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj y: ";
    cin >> y;
    cout << "Nazwa punktu: ";
    cin >> nazwa;
}

Square::Square(string n, float xx, float yy, float s, float w)
{
    nazwa = n;
    x = xx;
    y = yy;
    szerokosc = s;
    wysokosc = w;
}

void Square::wczytaj()
{

    cout << "Podaj x: lewego dolnego naroznika ";
    cin >> x;
    cout << "Podaj y prawego gornego: ";
    cin >> y;
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;
    cout << "Podaj nazwe Squarea: ";
    cin >> nazwa;
}