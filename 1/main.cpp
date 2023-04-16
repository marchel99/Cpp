#include <iostream>
#include <fstream>
#include "file.h"
using namespace std;



int main(){

    fstream myFile;
    //korzystanie z biblioteki fstream

    myFile.open("file.txt",ios::out);
    //funkcja z dwoma argumentami
    //ios:out ponieważ chce pisać w pliku

    if(myFile.is_open()){
        myFile << "Hello!" <<endl;
        myFile.close();

    }


    return 0;
}