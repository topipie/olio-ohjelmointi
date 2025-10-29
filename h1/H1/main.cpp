#include <iostream>
#include "funktiot.h"

using namespace std;




int main()
{
    float a, b;
    cout << "Anna ensimmainen kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >>b;
    cout << "Sina annoit luvut " << a << " ja " << b << endl;

    calcSum(a, b);
    calcDiv(a,b);

    int summa = retSum(a, b);
    cout << "retSum palautti a+b ja se on= " << summa <<endl;

    try {
        float osamaara = retDiv(a,b);
        cout << "retDiv palautti a/b ja se on= " << osamaara <<endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }


    return 0;
}




