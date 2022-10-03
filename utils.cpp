#include <iostream>
using namespace  std;


string reverse(string value) {
    string reversed_value;

    for (int i = value.length() - 1; i >= 0; i--) {
        reversed_value += value[i];
    }

    return reversed_value;
}
