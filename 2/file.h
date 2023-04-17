#include <iostream>
using namespace std;

class Event
{

    int day, month, year;
    int hour, minutes;
    string name;

public:
    Event(string="brak", int=1, int=1, int=2000, int=12, int=0);
    // Konstruktor z ustawionymi wartościami domyślnymi

    ~Event();
    // Destruktor

    void load();
    void show();
};