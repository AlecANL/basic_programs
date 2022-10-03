#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

string reverse(string value);

template <typename T>
string NumberToString(T pNumber)
{
    ostringstream oOStrStream;
    oOStrStream << pNumber;
    return oOStrStream.str();
}

void binaryNumberConverter() {
    int value, value_support;
    string temp_value;
    string finalValue;

    cout<<"Ingresa tu numero a convertir a binario: ";
    cin>>value;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
        cout<<"Ingresa tu numero a convertir a binario: ";
        cin>>value;
    }

    value_support = value;



    while (value > 0) {
        temp_value += NumberToString(value % 2);
        value = trunc(value / 2);

    }

    finalValue = reverse(temp_value);

    cout<<"Resultado final, "<<"el numero: "<< value_support<<" = "<<finalValue<<" en binario "<<endl;
}