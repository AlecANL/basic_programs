#include <iostream>
using namespace std;

void mainMenu();

void calculator();
void isEveNumber();
void measurementConverter();
void palindromeChecked();
void romeNumberConverter();
void binaryNumberConverter();
void multiplyTableGenerator();
void multiplyListGenerator();
void hypotenuseCalculator();
void makeFigure();
void convertDecimalToHexadecimal();
void makeMultiplyGraphicMode();
void convertLettersToNumbers();

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
        case 5:
            romeNumberConverter();
            break;
        case 6:
            convertLettersToNumbers();
            break;
        case 8:
            multiplyTableGenerator();
            break;
        case 9:
            multiplyListGenerator();
            break;
        case 10:
            makeMultiplyGraphicMode();
            break;
        case 11:
            binaryNumberConverter();
            break;
        case 12:
            convertDecimalToHexadecimal();
            break;
        case 13:
            makeFigure();
            break;
        case 16:
            hypotenuseCalculator();
            break;
        default:
            cout<<"Opción invalida. Por favor vuelve a intentarlo"<<endl;
            break;
    }
}