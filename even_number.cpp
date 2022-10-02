#include <iostream>
using namespace std;

void isEveNumber() {
    int n;
    cout<<"Ingresa un número entero: ";
    cin>>n;

    if(cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
        cout<<"Ingresa un número entero: ";
        cin>>n;
    }

    bool isEven = n % 2 == 0;

    if (isEven) {
        cout<<"El número: "<<n<<" es par."<<endl;
    }else  {
        cout<<"El número: "<<n<<" es impar."<<endl;
    }
}