#include <iostream>
using namespace std;

void calculator();
void mainMenu();

void mainMenuHandler(int option) {
    switch (option) {
        case 1:
            calculator();
            break;
        default:
            cout<<"Opción invalida. Por favor vuelve a intentarlo"<<endl;
            break;
    }
}