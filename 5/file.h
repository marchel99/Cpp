#include <iostream>
#include <string>
using namespace std;

class Book
{
    string tytul;
    string wydawnictwo;
    string autor;
    int rok_wydania;
    int ilosc_stron;

public:
    void get();
    void set();
};

class Parent




{
public:
    int a;
    int b;
    
    string nazwa;

    void set();
    void get();

    Parent(int aa = 1, int bb = 2, string = "nazwa");
    // deklaracja konstruktora
};

class Child : public Parent
{
public:
    int c;

    void setData(int value)
    {

        this->a = a;
        this->b = b;
    }
};
