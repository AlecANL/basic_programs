#include <iostream>
using namespace std;

void measurementConverterMenu();
void mainMenu();
void mainMenuHandler(int option);

void kilometersToMiles(int option);
void metersToInches(int option);
void poundsToKilograms(int option);

void measurementConverter() {
    int option;

    measurementConverterMenu();
    cin>>option;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
        measurementConverterMenu();
        cin>>option;
    }


//    system("cls");


    switch (option) {
        case 1:
        case 2:
            kilometersToMiles(option);
            break;
        case 3:
        case 4:
            metersToInches(option);
            break;
        case 5:
        case 6:
            poundsToKilograms(option);
            break;
        case 0:
//            system("cls");
            mainMenu();
            cin>>option;
            mainMenuHandler(option);
//            system("cls");
            break;
        default:
            cout<<"Opción invalida. Vuelve a intentarlo."<<endl;
            measurementConverter();
            break;
    }

}

void kilometersToMiles(int option) {
    double n;
    const double numberToCalc = 1.609;

    if (option == 1) {
        cout<<"Ingresa los kilometros a convertir a millas: ";
        cin>>n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
            cout<<"Ingresa los kilometros a convertir a millas: ";
            cin>>n;
        }

        cout<<"El resultado de convertir "<<n<<" Kilometros a millas es de: "<<(n / numberToCalc)<<endl;
    } else {
        cout<<"Ingresa las millas a convertir en kilometros: ";
        cin>>n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
            cout<<"Ingresa las millas a convertir en kilometros: ";
            cin>>n;
        }

        cout<<"El resultado de convertir "<<n<<" millas a kilometros es de: "<<(n * numberToCalc)<<endl;
    }
}

void metersToInches(int option) {
    double n;
    const double numberToCalc = 39.37;

    if (option == 3) {
        cout<<"Ingresa los metros a convertir a pulgadas: ";
        cin>>n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
            cout<<"Ingresa los metros a convertir a pulgadas: ";
            cin>>n;
        }

        cout<<"El resultado de convertir "<<n<<" metros a pulgadas es de: "<<(n * numberToCalc)<<endl;
    } else {
        cout<<"Ingresa de pulgadas a convertir en metros: ";
        cin>>n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
            cout<<"Ingresa las pulgadas a convertir en metros: ";
            cin>>n;
        }

        cout<<"El resultado de convertir "<<n<<" pulgadas a metros es de: "<<(n / numberToCalc)<<endl;
    }
}

void poundsToKilograms(int option) {
    double n;
    const double numberToCalc = 2.205;

    if (option == 5) {
        cout<<"Ingresa la cantidad de libras a convertir a kilogramos: ";
        cin>>n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
            cout<<"Ingresa la cantidad de libras a convertir a kilogramos: ";
            cin>>n;
        }

        cout<<"El resultado de convertir "<<n<<" metros a pulgadas es de: "<<(n / numberToCalc)<<endl;
    } else {
        cout<<"Ingresa los kilogramos a convertir en libras: ";
        cin>>n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
            cout<<"Ingresa los kilogramos a convertir en libras: ";
            cin>>n;
        }

        cout<<"El resultado de convertir "<<n<<" pulgadas a metros es de: "<<(n * numberToCalc)<<endl;
    }
}