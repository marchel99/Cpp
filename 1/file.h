#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Pytanie
{   
public:
 
    string tresc;
    string a, b, c, d;
    string poprawna;
    string odpowiedz;

    int nr_pytania;
    int punkt; //0 lub 1

    void wczytaj(); //wczytuje dane z konsoli
    void zadaj(); //pobierz odpowiedz od uzytkownika
    void sprawdz(); //sprawdz czy ta odp jest dobra
   



};