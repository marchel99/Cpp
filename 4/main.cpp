#include <iostream>
#include "file.h"
#include <string>
using namespace std;

void printX()
{
    std::cout << "Friend!" << endl;
}

void printSample(Sample a)
{

    cout << a<< endl;
}

int main()
{

printSample();

/* 
    Sample s1;

    s1.get();

    printX();
 */
    return 0;
}