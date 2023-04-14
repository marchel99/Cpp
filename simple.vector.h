#ifndef simple_vector_h
#define simple_vector_h

class simple_vector {
private:
	double* pointer_to_values;
	const unsigned array_size;

public:
	//simple_vector(unsigned size) {
	//	pointer_to_values = new double[size]; // w ten spos�b alokujemy "tablic�" o wielko�ci size
		// int* variable = new int; // w ten spos�b alokujemy pami�� na zwyk�� zmienn�
	//}

	simple_vector(unsigned size) // drugi spos�b na inicjalizacj� zmiennych obiektu
		: pointer_to_values(new double[size]), array_size(size) { /*dalsze czynno�ci*/ }

	~simple_vector();

	/*double operator[](int i) { // w ten spos�b zwracamy warto�� do odczytu
							   // tablica
		                       // cout << tablica[i]
							   // tablica[i] = 5.0 - niemo�liwe
		if (i >= array_size || i < 0) {
			throw "Wrong index";
		}

		else {
			return pointer_to_values[i];
		}
	}*/

	double& operator[](int i);
};

#endif