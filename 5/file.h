#include <iostream>
#include <string>
using namespace std;

class Book
{
    public:
    string tytul;
    string wydawnictwo;
    string autor;
    int rok_wydania;
    int ilosc_stron;

    void get();
    void set();
  friend ostream& operator<<(ostream& os, const Book& book);
};


ostream& operator<<(ostream& os, const Book& book) {
    os << "Tytul: " << book.tytul << endl;
    os << "Autor: " << book.autor << endl;
    os << "Wydawnictwo: " << book.wydawnictwo << endl;
    os << "Rok wydania: " << book.rok_wydania << endl;
    os << "Ilosc stron: " << book.ilosc_stron << endl;
    return os;
}




