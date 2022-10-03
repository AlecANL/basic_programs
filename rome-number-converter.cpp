#include <iostream>
#include <cmath>

using namespace std;

void romeNumberConverter() {
    int unit, c, d, rest, dozens,hundreds;
    int n;
    string value;

    cout<<"Ingresa un numero dentro del rango de 1 a 1000: ";
    cin>>n;

    if (n > 1000) {
        cout<<"El sistema no soporta numero mayores a 1000. Por favor vuelve a intentarlo."<<endl;
        cout<<"Ingresa un numero: ";
        cin>>n;
    } else if (n <= 0) {
        cout<<"El sistema no soporta numero negativos o 0. El rango permitido es de 1 a 1000. Por favopr vuelve a intentarlo."<<endl;
        cout<<"Ingresa un numero: ";
        cin>>n;
    }

    if (cin.fail()) {
        cout<<"El sistema no soporta caracteres especiales. Por favor ingresa un numero."<<endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"Ingresa un numero: ";
        cin>>n;
    }

    c = trunc(n / 100);
    rest = n % 100;
    d = trunc(rest / 10);
    rest = rest % 10;

    unit = rest;
    hundreds = c;
    dozens = d;


    if (hundreds <= 3) {
        for (int i = 0; i < c; ++i) {
            value += "C";
        }
    }

    if (hundreds == 4) {
        value += "CD";
    }

    if (hundreds >= 5 && hundreds <= 8) {
        value += "D";
        for (int i = 5; i < hundreds; ++i) {
            value += "C";
        }
    }

    if (hundreds == 9) {
        value += "CM";
    }

    if (hundreds >= 10) {
        value += "M";
    }

    if (dozens <= 3) {
        for (int i = 0; i < dozens; ++i) {
            value += "X";
        }
    }

    if (dozens == 4) {
        value += "XL";
    }

    if (dozens >= 5 && dozens <= 8) {
        value += "L";

        for (int i = 5; i < dozens -1 ; ++i) {
            value += "X";
        }
    }

    if (dozens == 9) {
        value += "XC";
    }

    if (unit <= 3) {
        for (int i = 0; i < unit; ++i) {
            value += "I";
        }
    }

    if (unit >= 5 && unit <= 8) {
        value += "V";

        for (int i = 5; i < rest; ++i) {
            value += "I";
        }
    }

    if (unit == 4) {
        value += "IV";
    }

    if (unit == 9) {
        value += "IX";
    }


    cout<<"======================================="<<endl;
    cout<<"|   Valor ingresado (decimal): "<<n<<endl;
    cout<<"|   Coversion a numero romano: "<<value<<endl;
    cout<<"========================================"<<endl;
}