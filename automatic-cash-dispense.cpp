#include <iostream>
using namespace std;

struct User {
    int id;
    int amount;
    int numberCard;
    char name[50];
    char lastName[50];
    int pin;
};


void mainMenu();
void automaticCashDispenseMenu();
void automaticCashDispenseSubMenu(int option);
void privateActions(int currentId, User userLogged);
void login();
void mainMenuHandler(int option);
int generateRandom();

void handleMakeUser();
void cashBack(int currentId, User userLogged);
void updateAmount(int id, int amount, User userLogged);
void viewCurrentAmount(int currentId, User userLogged);
void automaticCashDispenseSubMenu();




const char *users_file = "users_file.dat";
const char *users_bank_file = "users_bank_file.dat";




void automaticCashDispense() {
    int subOption;

    automaticCashDispenseSubMenu();
    cin>>subOption;

    automaticCashDispenseSubMenu(subOption);
}


void automaticCashDispenseSubMenu(int option) {
    switch (option) {
        case 1:
            login();
            break;
        case 2:
            handleMakeUser();
            break;
        default:
            handleMakeUser();
            break;
    }
}

void privateActions(int currentId, User userLogged) {
    cout<<" ============== Bienvenido: "<<userLogged.name<<"  "<<userLogged.lastName<<" ================= "<<endl;
    int option;

    automaticCashDispenseMenu();
    cin>>option;

    switch (option) {
        case 1:
            cashBack(currentId, userLogged);
            break;
        case 2:
            viewCurrentAmount(currentId, userLogged);
            break;
        case 3:
            break;
        case 0:
            mainMenu();
            cin>>option;
            mainMenuHandler(option);
            break;
        default:
            mainMenu();
            cin>>option;
            mainMenuHandler(option);
            break;
    }
}

void login() {
    int numberCard;
    bool isLogged = false;
    int pin;

    cout<<"Ingresa tu numero de tarjeta: ";
    cin>>numberCard;
    cout<<"Inresar tu pin: ";
    cin>>pin;

    FILE* file = fopen(users_file, "rb");

    if (!file) {
        file = fopen(users_file, "w+b");
    }

    User user;
    User userLogged;
    int id = 0;
    int currentId;

    fread(&user, sizeof(user), 1, file);

    do {
        if (numberCard != user.numberCard && pin != user.pin) {
            cout<<"Los datos ingresados no coinciden. Porfavor vuelve a intentarlo";
            cout<<"Ingresa tu numero de tarjeta: ";
            cin>>numberCard;
            cout<<"Inresar tu pin: ";
            cin>>pin;
        }



        if (numberCard == user.numberCard && pin == user.pin) {
            isLogged = true;
            userLogged.id = user.id;
            userLogged.amount = user.amount;
            userLogged.numberCard = user.numberCard;
            userLogged.pin = pin;
            currentId = id;

            for (int i = 0; i < 50; ++i) {
                userLogged.name[i] = user.name[i];
                userLogged.lastName[i] = user.lastName[i];
            }
            break;

        }

        fread(&user, sizeof(user), 1, file);
        id += 1;
    } while (feof(file) == 0);

    if (isLogged) {
        privateActions(currentId, userLogged);
    }

}


void handleMakeUser() {
    FILE * usersFile = fopen(users_file, "w+b");
    User user;

    int currentId = generateRandom();
    int calculatedAmount = generateRandom();

    fflush(stdin);
    cout<<"Ingresa tu nombre: ";
    cin>>user.name;
    cout<<"Ingresa tu apellido: ";
    cin>>user.lastName;
    cout<<"Ingresa el numero de tu tarjeta: ";
    cin.ignore();
    cin>>user.numberCard;
    cout<<"Configura tu PIN de acceso (4 digitos): ";
    cin>>user.pin;

    user.id = 50;
    user.amount = 50;


    fwrite(&user, sizeof(user), 1, usersFile);

    cout<<currentId<<endl;
    cout<<calculatedAmount<<endl;
    cout<<"===="<<endl;

    cout<<user.name<<endl;
    cout<<user.lastName<<endl;
    cout<<user.id<<endl;
    cout<<user.amount<<endl;
    cout<<user.numberCard<<endl;
    cout<<user.pin<<endl;


    system("cls");
    fclose(usersFile);
}

void cashBack(int currentId, User userLogged) {

    int amountToCashBack;

    do {
        cout<<"Ingresa la cantidad a retirar: ";
        cin>>amountToCashBack;

        if (userLogged.amount < amountToCashBack) {
            cout<<"No tienes los fondos sucientes para retirar: "<<amountToCashBack<<endl;
        }  else {
            updateAmount(currentId, amountToCashBack, userLogged);
        }

    } while (userLogged.amount < amountToCashBack);

}

void updateAmount(int id, int amount, User userLogged) {

    cout<<"Number card >>>"<<userLogged.numberCard<<endl;
    cout<<"PIN >>>"<<userLogged.pin<<endl;

    FILE* file = fopen(users_file, "r+b");

    fseek(file, id * sizeof(userLogged), SEEK_SET);
    userLogged.amount = userLogged.amount - amount;

    fwrite(&userLogged, sizeof(userLogged), 1, file);
    fclose(file);

    cout<<"Number card >>>"<<userLogged.numberCard<<endl;
    cout<<"PIN >>>"<<userLogged.pin<<endl;
}

void viewCurrentAmount(int currentId, User userLogged) {

    cout<<" Monto:  "<<userLogged.amount<<endl;
}