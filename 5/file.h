#include <iostream>
#include <string>
using namespace std;

class Parent
{

    int a;
    int b;
    string nazwa;

public:
    void set();
    void get();

    Parent(int aa = 1, int bb = 2, string = "nazwa");
    // deklaracja konstruktora
};

class Child :public Parent
{
public:
    int c;
};
