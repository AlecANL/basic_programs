#include <iostream>
using namespace std;

void mainMenu();

void calculator();
void isEveNumber();

void mainMenuHandler(int option) {
    switch (option) {
        case 1:
            calculator();
            break;
        case 2:
            isEveNumber();
            break;
        default:
            cout<<"Opción invalida. Por favor vuelve a intentarlo"<<endl;
            break;
    }
}