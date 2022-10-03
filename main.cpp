#include <iostream>
using namespace std;

void mainMenu();
void mainMenuHandler(int option);


int main() {
    cout<<"Example"<<char(10)<<endl;

    int option;
    mainMenu();
    cin>>option;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
        mainMenu();
        cin>>option;
    }

//    system("cls");
    mainMenuHandler(option);




    return 0;
}
