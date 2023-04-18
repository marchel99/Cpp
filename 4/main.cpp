#include <iostream>
#include "file.h"
#include <string>
using namespace std;

void printX(MyClass obj) {
    std::cout << "The value of x is: " << obj.x << std::endl;
}

int main()
{


    Sample s1;

    s1.get();


    MyClass obj;
    printX(obj);


        return 0;
}