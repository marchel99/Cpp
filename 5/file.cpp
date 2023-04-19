#include <iostream>
#include <string>
using namespace std;
#include "file.h"

void Parent::get()
{
    cout << "a : " << a << endl
         << "b: " << b << endl
         << "nazwa: " << nazwa << endl;
}

void Parent::set()
{
    cin >> a;
    cin >> b;
    cin >> nazwa;
}

// definicja konstruktora
Parent(int aa, int b,string n)
{
    a = aa;
    b=bb;
    n="Rodzic";
}
