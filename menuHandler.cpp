#include <iostream>
using namespace std;

void mainMenu();

void calculator();
void isEveNumber();
void measurementConverter();
void palindromeChecked();

void mainMenuHandler(int option) {
    switch (option) {
        case 1:
            calculator();
            break;
        case 2:
            isEveNumber();
            break;
        case 3:
            measurementConverter();
            break;
        case 4:
            palindromeChecked();
            break;
        default:
            cout<<"Opción invalida. Por favor vuelve a intentarlo"<<endl;
            break;
    }
}