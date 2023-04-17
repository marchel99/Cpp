#include <iostream>
using namespace std;

class Event
{

    int day, month, year;
    int hour, minutes;
    string name;

public:

    Event(string, int, int, int, int, int);
     //Konstruktor


    ~Event();
    //Destruktor


    void load();
    void show();
};