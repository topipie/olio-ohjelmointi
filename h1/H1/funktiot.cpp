#include <iostream>
#include "funktiot.h"

using namespace std;


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

int retSum(int a, int b){
    return a+b;
}

float retDiv(float a, float b)
{
    if(b==0){
        throw runtime_error("jakaja ei saa olla nolla!!!!!.");
    }else{
        return a / b;
    }


}
