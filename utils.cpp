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


template <typename T>
string parseToString(T n) {
    ostringstream oOStrStream;
    oOStrStream << n;
    return oOStrStream.str();
}