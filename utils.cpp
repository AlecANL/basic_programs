#include <iostream>
#include <sstream>
using namespace  std;

string reverse(string value) {
    string reversed_value;

    for (int i = value.length() - 1; i >= 0; i--) {
        reversed_value += value[i];
    }

    return reversed_value;
}

int parseInt(char x) {
    return  x - '0';
}
float MRound(float var) {
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}



template <typename T>
string parseToString(T n) {
    ostringstream oOStrStream;
    oOStrStream << n;
    return oOStrStream.str();
}


int toInt(string str) {
    int num;
    stringstream ss(str);
    ss >> num;
    return num;
}

int generateRandom() {
    srand(time(0));
    return rand() % (100 + 1 - 100) + 100 ;
}