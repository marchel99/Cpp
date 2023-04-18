#include <iostream>
#include <string>
using namespace std;

class Sample
{

public:
    int a;
    int b;
    int c;
    string name;

    Sample(int aa = 1, int bb = 2, int cc = 3);

    ~Sample();

    void get();
    void set();

    friend void aaaprintSample();
    friend void wypisz();
};

class MyClass
{
private:
    int a;
  int b;
  int c;


public:
        friend void printX();
};


class child_myClass :public MyClass
{


    
};
