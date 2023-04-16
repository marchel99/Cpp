#include <iostream>
#include <fstream>
#include <string>
#include "file.h"
using namespace std;

int main()
{

int suma_a=0;
int suma_b=0;
int suma_c=0;
int suma_d=0;


Pytanie p[5];

for(int i=0;i<=4;i++)
{
p[i].nr_pytania=i+1;
p[i].wczytaj();
p[i].zadaj();
p[i].sprawdz();

suma_a+=p[i].ilosc_a;
suma_b+=p[i].ilosc_b;
suma_c+=p[i].ilosc_c;
suma_d+=p[i].ilosc_d;
}
 




    cout<<"KONIEC QUIZU!"<<endl;

   cout<<"a:"<<suma_a<<endl;
   cout<<"b:"<<suma_b<<endl;
   cout<<"c:"<<suma_c<<endl;
   cout<<"d:"<<suma_d<<endl;

    return 0;
}

/*
    fstream myFile;
    // korzystanie z biblioteki fstream
    myFile.open("file.txt", ios::in);

    if (myFile.is_open())
    {
        string line;
        int i = 1;
        while (getline(myFile, line))
        {

            cout << i << ": ";
            cout << line << endl;
            ++i;
        }
        myFile.close();
    }
 */

/*


    //ios czyli inpuit output stream
    myFile.open("file.txt", ios::out);
    // funkcja z dwoma argumentami
    // ios:out ponieważ chce pisać w pliku
    if (myFile.is_open())
    {
        myFile << "Hello!" << endl;
        myFile.close();
    }


 myFile.open("file.txt", ios::app);
    // funkcja z dwoma argumentami
    // ios:out ponieważ chce pisać w pliku
    if (myFile.is_open())
    {
        myFile << "Hello2!" << endl;
        myFile.close();
    }


 */
