#include <iostream>
#include "file.h"
#include <string>
using namespace std;

void printX()
{
    std::cout << "Friend!" << endl;
}

void printSample(Sample ab)
{
  cout<< ab.b <<endl;
}

int main()
{

Sample s1;

printSample(s1);

/* 
    Sample s1;

    s1.get();

    printX();
 */
    return 0;
}