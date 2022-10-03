#include <iostream>
using namespace  std;

void multiplyTableGenerator() {
    int n;

    cout<<"Ingrese un numero para generar la tabla de multiplicar: ";
    cin>>n;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
        cout<<"Ingrese un numero para generar la tabla de multiplicar: ";
        cin>>n;
    }

    cout<<"Tabla de multiplicar: "<<n<<endl;

    for (int i = 1; i <= 10; ++i) {
        cout<<i<<" X "<<n<<" = "<<(i * n)<<endl;
    }
}
