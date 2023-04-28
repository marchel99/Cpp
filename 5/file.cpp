#include <iostream>
#include <string>
using namespace std;
#include "file.h"





void Book::get(){

 cout << "tytul : " << tytul << endl
         << "wydawnictwo: " << wydawnictwo << endl
         << "autor: " << autor << endl
  << "rok_wydania: " << rok_wydania<< endl
  << "ilosc_stron: " << ilosc_stron<< endl;


}

void Book::set(){
  cin >> tytul;
    cin >> wydawnictwo;
    cin >> autor;
     cin >> rok_wydania;
      cin >> ilosc_stron;
}












