
#include <iostream>
#include <cmath>
using namespace std;

void hypotenuseCalculator() {
    int a,b;
    cout<<"Ingresa un número entero para el cateto A: ";
    cin>>a;
    cout<<"Ingresa un número entero para el cateto B: ";
    cin>>b;

    if(cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
        cout<<"Ingresa un número entero para el cateto A: ";
        cin>>a;
        cout<<"Ingresa un número entero para el cateto B: ";
        cin>>b;
    }

    cout<<"Hipotenusa 'C': "<<(sqrt(a*a + b*b))<<endl;


}