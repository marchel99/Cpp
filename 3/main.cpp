#include <iostream>
#include "file.h"
using namespace std;

void sedzia(Punkt &pkt, Square &p)
{
    p.nazwa = "PODMIANA";

    if ((pkt.x >= p.x) && (pkt.x <= p.x + p.szerokosc) && (pkt.y >= p.y) && (pkt.y <= p.y + p.wysokosc))
        cout << endl
             << "Punkt " << pkt.nazwa << " nalezy do Squarea: " << p.nazwa;

    else

        cout << endl
             << "Punkt " << pkt.nazwa << " lezy POZA Squareem: " << p.nazwa;
}

int main()
{

    Punkt pkt1("A", 3, 1);
     pkt1.wczytaj();

    Square p1("Square",0, 0, 6, 4);
    p1.wczytaj();

    sedzia(pkt1,p1);

    return 0;
}