#include <iostream>
#include <cmath>
using namespace std;

void figuresMenu();
void mainMenu();
void mainMenuHandler(int option);

void makeCircle();
void makeSquare();
void makeTriangle();
void makeRhombus();
void makeParallelogram();
void makeTrapezoid();
void makeTriangleRightSide();
void makeTriangleSecondPattern();

void makeFigure() {
    int option;
    figuresMenu();
    cin>>option;

    if(cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"El sistema no soporta caracteres especiales. Por favor vuelve a intentarlo."<<endl;
        figuresMenu();
        cin>>option;
    }

    switch (option) {
        case 1:
            makeCircle();
            break;
        case 2:
            makeTriangle();
            break;
        case 3:
            makeSquare();
            break;
        case 4:
            makeTriangleRightSide();
            break;
        case 5:
            makeRhombus();
            break;
        case 6:
            makeTrapezoid();
            break;
        case 7:
            makeParallelogram();
            break;
        case 8:
            makeTriangleSecondPattern();
            break;
        case 0:
            mainMenu();
            cin>>option;
            mainMenuHandler(option);
            break;
        default:
            cout<<"Opción invalida. Vuelve a intentarlo."<<endl;
            makeFigure();
            break;
    }
}

void makeCircle() {
    int radio = 12;

    for (int i = 0; i <= (radio * 2); i++) {
        for (int j = 0; j <= (radio * 2); j++) {
            if ((pow(i - radio,2) + pow(j - radio, 2)) <= pow(radio, 2))  {
                cout<<".";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void makeTriangleSecondPattern() {
    int height = 10;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
    for (int i = height - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}

void makeSquare() {
    int side = 10;

    for (int i = 0; i <= side; i++) {
        for (int j = 1; j <= side; j++) {
            cout<<". ";
        }
        cout<<endl;

    }
}

void makeRhombus() {
    int side = 10;

    for (int i = 0; i <= side; i++) {
        for (int j = side - i; j > 0; j--) {
            cout<<" ";
        }

        for (int k = 0; k < i; k++) {
            cout<<". ";
        }
        cout<<endl;

    }

    for (int i = 0; i <= side; i++) {
        for (int k = 0; k < i; k++) {
            cout<<" ";
        }

        for (int j = side - i - 1; j > 0; j--) {
            cout<<" .";
        }

        cout<<endl;
    }
}

void makeParallelogram() {
    int height = 20;
    int base = 10;

    for (int i = 1; i <= height; i++) {
        for (int k = height - i; k > 0; k--) {
            cout<<" ";
        }

        for (int j = 0; j < base; j++) {
            cout<<" .";
        }

        cout<<endl;
    }
}

void makeTrapezoid() {
    int height = 4;
    int base = 8;
    int helper = 4;

    for (int i = 1; i <= height; i++) {
        for (int k = helper; k > 1; k--) {
            cout<<"  ";
        }

        for (int j = 0; j < base; j++) {
            cout<<".";
        }

        cout<<endl;

        base = base + 4;
        helper--;
    }
}

void makeTriangleRightSide() {
    int n = 20;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout<<" ";
        }
        for (int j = i; j <= n; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
}

void makeTriangle() {
    int n = 10;

    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            cout<<" ";
        }

        for (int j = 1; j <= i; ++j) {
            cout<<"*";
        }

        for (int j = 1; j <= i; ++j) {
            cout<<"*";
        }

        cout<<endl;
    }
}