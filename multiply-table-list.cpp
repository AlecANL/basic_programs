#include <iostream>
using namespace  std;

void multiplyListGenerator() {

    cout<<"Tablas de multiplicar del 1 al 10."<<endl;

    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            if (j <= 10) {
                cout <<j<<"x"<<i<< "="<<(i * j)<<"  ";

            } else {
                cout <<j<<"x"<<i<<"="<< (i * j)<<"  ";
            }
        }
        cout<<endl;
    }
}
