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
     cout << "podaj tytul : " << endl;
  cin >> tytul;
       cout << "podaj wydawnictwo: " << endl;
    cin >> wydawnictwo;
         cout << "podaj autora : " << endl;
    cin >> autor;
             cout << "podaj rok wyd: " << endl;
     cin >> rok_wydania;
              cout << "podaj liczbe" << endl;
      cin >> ilosc_stron;
}












