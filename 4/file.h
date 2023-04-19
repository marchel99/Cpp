#include <iostream>
#include <string>
using namespace std;

class Sample
{

  int a;
  int b;
  int c;
  string name;

  Sample(int aa = 1, int bb = 2, int cc = 3);

  ~Sample();

  void get();
  void set();

  friend void printSample(Sample &a);
  friend void wypisz(Sample &s);
};

class MyClass
{
private:
  int a;
  int b;
  int c;

public:
  friend void printX();
  friend void child();
};

class dziecko : public Sample
{

  // friend void funkcja();
};

class child_myClass : public MyClass
{

  int d;

  friend void child(child_myClass &cxos);
};
