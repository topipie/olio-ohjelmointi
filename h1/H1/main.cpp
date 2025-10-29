#include <iostream>

using namespace std;
void calcSum(int a, int b);
void calcDiv(float a, float b);

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
    return 0;
}

void calcSum(int a, int b){
    int summa = a+b;
    cout << "Lukujen " << a << " ja " << b << " summa= " << summa <<endl;
}

void calcDiv(float a, float b){

    if(b!=0){
        float osamaara = a/b;
        cout << "Lukujen " << a << " ja " << b << " osamaara= " << osamaara <<endl;
    }
    else
    {
        cout << "NOLLALLA EI VOI JAKAA" <<endl;
    }

}

