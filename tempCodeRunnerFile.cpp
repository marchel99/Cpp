#include <iostream>
#include "simple_vector.h"

using namespace std;

class complex {
private:
	// umieszczamy elementy, kt�re nie powinny by� dost�pne bezpo�rednio
	// dla programisty
	double real, imag;
public:
	// umieszczamy elementy interfejsu, z kt�rych programista mo�e korzysta�
	// metody (funkcje klasy) przeprowadzaj�ce operacje na obiekcie (ustaw nasz�
	// zmienn� rzeczywist� na x, ustaw zmienn� urojon� na y, podaj warto��
	// zmiennej rzeczywistej, dodaj, odejmij, podziel, pomn� etc.)

	// 3 przeci��enia konstruktora (polimorfizm, przeci��anie funkcji i metod)
	complex(){ // specjalna metoda zwana konstruktorem
			   // programista nie mo�e jej wywo�a� na obiekcie,
			   // s�u�y ona do inicjalizacji obiektu
		       // konstruktor bez parametr�w to "konstruktor domy�lny"
		real = 0;
		imag = 0;
	}

	complex(double r, double i) { // na podstawie parametr�w dostarczonych 
							// konstruktorowi tworzymy obiekt
		real = r; imag = i; 
	}

	complex(const complex& c) { // konstruktor kopiuj�cy nasz obiekt
		real = c.real; // w tym wypadku nie jest to a� tak wa�ne,
		imag = c.imag; // ale warto pami�ta� o takiej mo�liwo�ci przy
					   // dynamicznej alokacji pami�ci
	}

	~complex() { // jest to metoda, kt�ra jest wywo�ywana, gdy obiekt znajdzie si�
			     // poza scopem (zasi�giem)
		// implementacja destruktora
		// sekcja, w kt�rej mo�emy np. zwolni� pami��
		cout << "Goodbye\n";
	}

	double get_real() { return real; }
	double get_imag() { return imag; }

	void set_real(double i) { real = i; }
	void set_imag(double i) { imag = i; }

	complex& operator+=(const complex& c) {
		real += c.real;
		imag += c.imag;
		
		// this - adres aktualnego obiektu
		// *this - obiekt

		return *this;
	}

	complex& operator-=(const complex& c) {
		real -= c.real;
		imag -= c.imag;

		// this - adres aktualnego obiektu
		// *this - obiekt

		return *this;
	}
};

complex operator+(complex& c1, complex& c2) {
	complex result;

	result.set_real(c1.get_real() + c2.get_real());
	result.set_imag(c1.get_imag() + c2.get_imag());

	return result;
}

complex operator-(complex& c1, complex& c2) {
	complex result;

	result.set_real(c1.get_real() - c2.get_real());
	result.set_imag(c1.get_imag() - c2.get_imag());

	return result;
}

// przeci��ony operator przesuni�cia bitowego (w C++ stosowany do wypisywania, zapisu do plik�w)
ostream& operator<<(ostream& os, complex& c) {
	os << c.get_real();
	
	double imag = c.get_imag();

	if (imag >= 0.0) {
		os << " + ";
	}
	else {
		os << " - ";
	}