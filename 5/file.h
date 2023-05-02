#include <iostream>
#include <string>
using namespace std;

class Book
{
    

public:
    void get();
    void set();
    string tytul;
    string wydawnictwo;
    string autor;
    int rok_wydania;
    int ilosc_stron;


     friend ostream& operator<<(ostream& os, const Book& book);


};



ostream& operator<<(ostream& os, const Book& book) {
    os << book.tytul << ", " << book.autor << ", " << book.wydawnictwo << ", " << book.rok_wydania << "), " << book.ilosc_stron << " pages";
    return os;
}

