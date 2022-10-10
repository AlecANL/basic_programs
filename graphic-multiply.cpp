#include <iostream>
#include <sstream>
using namespace std;

template <typename T>
string parseToString(T n) {
    ostringstream oOStrStream;
    oOStrStream << n;
    return oOStrStream.str();
}

string reverse(string value);
int parseInt(char x);

void  makeMultiplyGraphicMode() {
    string a;
    string b;

    cout<<"Ingresar el primer numero: ";
    cin>>a;
    cout<<"Ingrear el segund numero: ";
    cin>>b;

    string tmp;
    string helper;
    int rest =0;
    int n1, n2;

    istringstream(a) >> n1;
    istringstream(b) >> n2;

    cout<<"   "<<a<<endl;
    cout<<"X ";
    cout<<" "<<b<<endl;
    cout<<"________________________"<<endl;

    for (int i = b.length() - 1; i >= 0; --i) {
        for (int j = a.length() - 1 ; j >= 0; --j) {
            const int amount = parseInt(b[i]) * parseInt(a[j]);
            const bool isDigit = (amount <= 9);

            if (j != 0) {
                if (!isDigit) {
                    helper += parseToString(parseInt(parseToString(amount)[1] + rest));
                    rest = parseInt(parseToString(amount)[0]);
                } else {
                    helper += parseToString(amount);
                }

            } else {
                tmp += parseToString(amount + rest);
                tmp += reverse(helper);
                rest = 0;
                helper = "";
            }
        }

        cout<<"   "<<tmp<<"  "<<endl;
        tmp = "";
    }

    cout<<"________________________"<<endl;
    cout<<(n1 * n2)<<endl;
}