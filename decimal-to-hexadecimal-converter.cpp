#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

template <typename T>
string parseToString(T n) {
    ostringstream oOStrStream;
    oOStrStream << n;
    return oOStrStream.str();
}

string reverse(string value);

string getHex(int value);

void convertDecimalToHexadecimal() {
    int n;
    int tmp ;
    string val;
    string hexadecimal;

    cout<<"Ingresa un número decimal: ";
    cin>>n;

    if(cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
        cout<<"Ingresa un número entero: ";
        cin>>n;
    }

    tmp = n;

    while (trunc(tmp) >= 16) {
        val += getHex(tmp % 16);
        tmp = trunc(tmp / 16);
    }

    val += parseToString(getHex(tmp));
    hexadecimal = reverse(val);

    cout<<"======================================="<<endl;
    cout<<"|   Valor ingresado (decimal): "<<n<<endl;
    cout<<"|   Coversion a numero hexadecimal: "<<hexadecimal<<endl;
    cout<<"========================================"<<endl;
}


string getHex(int value) {
    string tmp;

    switch (value) {
        case 10:
            tmp = "A";
            break;
        case 11:
            tmp = "B";
            break;
        case 12:
            tmp = "C";
            break;
        case 13:
            tmp = "D";
            break;
        case 14:
            tmp = "E";
            break;
        case 15:
            tmp = "F";
            break;
        default:
            tmp = parseToString(value);
            break;
    }

    return tmp;
}