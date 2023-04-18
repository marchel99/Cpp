#include <iostream>
#include <string>
#include "file.h"
using namespace std;
void Sample::get()
{

    cout << a << endl
         << b<<endl<<c<<endl
         
         << name << endl;
}

void Sample::set()
{
}

Sample::Sample(int aa, int bb, int cc)
{

    a = aa;
    b = bb;
    c = cc;
}

Sample::~Sample(){
    cout<<"Helo"<<endl;
}