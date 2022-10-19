#include <iostream>
using namespace std;



void moveDotEntireScreen() {
    int length = 10;
    int position = 0;
    char response;

    cout<<"Para mover el caracter debes ingresar una posicion dentro del rango (0-10)"<<endl;

    do {
        for (int i = 0; i < length; ++i) {
            if (position == i) {
                cout<<" # ";
            } else {
                cout<<" _ ";
            }
        }

        cout<<endl;

        cout<<"Quieres salir del sistema ? (s/n): ";
        cin>> response;

        if (response == 'n' || response == 'N') {
            cout<<"Ingresa una posicion: ";
            cin>>position;
        }

    } while(response == 'n' || response == 'N');
}