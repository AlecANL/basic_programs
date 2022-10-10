#include <iostream>
#include <cmath>
using namespace std;

string calculateUnits(int n);
string calculateDozens(int n);
string calculateHundreds(int n);
string calculateThousands (int n);
string calculateMillions(int n);
string calculateSubUnits(int n);
string calcMillionsPlaceholder(int n, int divide, string singularPlaceholder, string pluralPlaceholder);
string calculateSubDozens(string txt, int n);

void calculateAmount(int n);

void convertLettersToNumbers() {
    int n;

    cout<<"Ingrear un numero: ";
    cin>>n;

    if (cin.fail()) {
        cout<<"El sistema no soporta caracteres especiales. Por favor ingresa un numero."<<endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout<<"Ingresa un numero: ";
        cin>>n;
    }

    calculateAmount(n);
}

void calculateAmount(int n) {
    string amount;

    if (n <= 999) {
        amount = calculateHundreds(trunc(n));
    } else if (n >= 1000 && n <= 999999) {
        amount = calculateThousands(n);
    } else if (n >= 1000000) {
        amount = calculateMillions(trunc(n));
    }

    cout<<amount<<endl;
}


string calculateHundreds(int n) {
    string letter;
    int hundreds = trunc(n / 100);
    int dozens = trunc(n - (hundreds * 100));

    switch (hundreds) {
        case 1:
            letter = dozens > 0 ? "CIENTO " : "CIEN";
            letter += dozens > 0 ? calculateDozens(dozens) : "";
            break;
        case 2:
            letter = "DOCIENTOS ";
            letter += calculateDozens(dozens);
            break;
        case 3:
            letter = "TRECIENTOS ";
            letter += calculateDozens(dozens);
            break;
        case 4:
            letter = "CUATROCIENTOS ";
            letter += calculateDozens(dozens);
            break;
        case 5:
            letter = "QUINIENTOS ";
            letter += calculateDozens(dozens);
            break;
        case 6:
            letter = "SEICIENTOS ";
            letter += calculateDozens(dozens);
            break;
        case 7:
            letter = "SETECIENTOS ";
            letter += calculateDozens(dozens);
            break;
        case 8:
            letter = "OCHOCIENTOS ";
            letter += calculateDozens(dozens);
            break;
        case 9:
            letter = "NOVECIENTOS ";
            letter += calculateDozens(dozens);
            break;
        default:
            letter = calculateDozens(dozens);
            break;
    }

    return letter;
}

string calcMillionsPlaceholder(int n, int divide, string singularPlaceholder, string pluralPlaceholder) {
    string letter;
    int hundreds = trunc(n / divide);
    int dozens = trunc(n - (hundreds * divide));

    if (hundreds > 0) {
        if (hundreds > 1) {
            letter = calculateHundreds(hundreds);
            letter += " ";
            letter += pluralPlaceholder;
        } else {
            letter = singularPlaceholder;
        }
    }

    if (dozens > 0) {
        letter += " ";
    }

    return letter;
}

string calculateThousands(int n) {
    string letter;
    int hundreds = trunc(n / 1000);
    int dozens = trunc(n - (hundreds * 1000));

    string placeholder = calcMillionsPlaceholder(n, 1000, "MIL", "MIL");
    string amount = calculateHundreds(dozens);

    if (placeholder == "") {
        return amount;
    }

    letter = placeholder;
    letter += " ";
    letter += amount;

    return letter;
}

string calculateMillions(int n) {
    string letter;
    int hundreds = trunc(n / 1000000);
    int dozens = trunc(n - (hundreds * 1000000));

    string placeholder = calcMillionsPlaceholder(n, 1000000, "UN MILLON", "MILLONES");
    string amount = calculateThousands(dozens);

    if (placeholder == "") {
        return amount;
    }

    letter = placeholder;
    letter += " ";
    letter += amount;

    return letter;
}

string calculateDozens(int n) {
    string letter;
    int dozens = trunc(n / 10);
    int units = trunc(n - (dozens * 10));

    switch (dozens) {
        case 0:
            letter = calculateUnits(units);
            break;
        case 1:
            letter = calculateSubUnits(units);
            break;
        case 2:
            if (units == 0) {
                return "VEINTE";
            }

            letter = "VEINTI";
            letter += calculateUnits(units);
        case 3:
            letter = calculateSubDozens("TREINTA", units);
            break;
        case 4:
            letter = calculateSubDozens("CUARENTA", units);
            break;
        case 5:
            letter = calculateSubDozens("CINCUENTA", units);
            break;
        case 6:
            letter = calculateSubDozens("SESENTA", units);
            break;
        case 7:
            letter = calculateSubDozens("SETENTA", units);
            break;
        case 8:
            letter = calculateSubDozens("OCHENTA", units);
            break;
        case 9:
            letter = calculateSubDozens("NOVENTA", units);
            break;
    }

    return letter;
}

string calculateUnits(int n) {
    string letter;

    switch (n) {
        case 1:
            letter = "UNO";
            break;
        case 2:
            letter = "DOS";
            break;
        case 3:
            letter = "TRES";
            break;
        case 4:
            letter = "CUATRO";
            break;
        case 5:
            letter = "CINCO";
            break;
        case 6:
            letter = "SEIS";
            break;
        case 7:
            letter = "SIETE";
            break;
        case 8:
            letter = "OCHO";
            break;
        case 9:
            letter = "NUEVE";
            break;
        default:
            letter = "";
            break;
    }

    return letter;
}

string calculateSubUnits(int n) {
    string letter;

    switch (n) {
        case 0:
            letter = "DIEZ";
            break;
        case 1:
            letter = "ONCE";
            break;
        case 2:
            letter = "DOCE";
            break;
        case 3:
            letter = "TRECE";
            break;
        case 4:
            letter = "CATORCERCE";
            break;
        case 5:
            letter = "QUINCE";
            break;
        default:
            letter = "DEICI";
            letter += calculateUnits(n);
            break;
    }

    return letter;
}

string calculateSubDozens(string txt, int n) {
    string letter;

    letter += txt;
    letter += " Y ";
    letter += calculateUnits(n);

    return  letter;
}