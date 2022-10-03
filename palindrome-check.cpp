#include <iostream>
using namespace  std;

string reverse(string value);

void palindromeChecked() {
    string value;

    cout<<"Ingresa un texto o numero para comprobar si es un numero o palabra palindromo"<<endl;
    cout<<"Ingresa tu valor: ";
    cin.ignore();
    getline(cin, value);
    string reversed_value = reverse(value);

    if (value == reversed_value) {
        cout<<"El valor "<<" ' "<<value<<" ' "<<" Es un palindromo. "<<value<<" - "<<reversed_value<<endl;
    } else {
        cout<<"El valor "<<" ' "<<value<<" ' "<<" No es un palindromo. "<<endl;
    }
}