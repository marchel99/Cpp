#include <iostream>

// #define log(x) std::cout << x << std::endl
using namespace std;

int main()
{
    int a = 0;
    int b=0;

    cout << "Ile masz a" << endl;

    cin >> a;

    cout <<"Ile masz b" <<endl;

    cin >> b;

    cout << "a:" << a << endl << "b:" <<b <<endl;

    // podajemy jakiego typu jest to odniesienie
    // nazwa odniesienia jest ze slowa "reference"
    //  odniesienie odnosi się do zmiennej b

    /*
    int b=5;
    int& refb=b;
    refb=232;

     */

    return 0;
}