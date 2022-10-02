#include <iostream>
using namespace  std;

void calculatorMenu();
void mainMenu();
void mainMenuHandler(int option);


void sum();
void rest();
void divide();
void multiply();

void calculator () {
    int option;
    double a,b;

    calculatorMenu();
    cin>>option;
//    system("cls");


    switch (option) {
        case 5:
//            system("cls");
            mainMenu();
            cin>>option;
            mainMenuHandler(option);
//            system("cls");
            break;
        case 1:
            sum();
            break;
        case 2:
            rest();
            break;
        case 3:
            divide();
            break;
        case 4:
            multiply();
            break;
        default:
            cout<<"Opción invalida. Vuelve a intentarlo."<<endl;
            calculator();
            break;
    }
}

void sum() {
    double a, b;
    cout<<"Ingresa el primer número: ";
    cin>>a;
    cout<<"Ingresa el segundo número: ";
    cin>>b;

    cout<<"El resultado de la suma de: "<<a<<" + "<<b<<" is: "<<(a+b)<<endl;
}

void rest() {
    double a, b;
    cout<<"Ingresa el primer número: ";
    cin>>a;
    cout<<"Ingresa el segundo número: ";
    cin>>b;

    cout<<"El resultado de la resta de: "<<a<<" - "<<b<<" is: "<<(a-b)<<endl;
}

void multiply() {
    double a, b;
    cout<<"Ingresa el primer número: ";
    cin>>a;
    cout<<"Ingresa el segundo número: ";
    cin>>b;

    cout<<"El resultado de la multiplicación de: "<<a<<" * "<<b<<" is: "<<(a*b)<<endl;
}

void divide() {
    double a, b;
    cout<<"Ingresa el primer número: ";
    cin>>a;
    cout<<"Ingresa el segundo número: ";
    cin>>b;

    if (b == 0) {
        cout<<"No se pude dividir sobre 0. Vuelve a ingresar un numero.: ";
        cin>>b;
    }

    cout<<"El resultado de la división de: "<<a<<" / "<<b<<" is: "<<(a/b)<<endl;
}