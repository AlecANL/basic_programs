#include <iostream>
using namespace std;

void mainMenu();
void mainMenuHandler(int option);


int main() {
    int option;
    mainMenu();
    cin>>option;
//    system("cls");
    mainMenuHandler(option);



    return 0;
}
