#include <iostream>
using namespace std;

class Square;

class Punkt
{
    string nazwa;
    float x, y;

public:
    Punkt(string = "A", float = 0, float = 0);
    void wczytaj();

    friend void sedzia(Punkt &pkt, Square &p);
};

class Square
{
    string nazwa;
    float x, y, szerokosc, wysokosc;

public:
    Square(string = "brak", float = 0, float = 0, float = 1, float = 1);
    void wczytaj();

    friend void sedzia(Punkt &pkt, Square &p);
};