#include <iostream>

using namespace std;
void calcSum(int a, int b);
void calcDiv(float a, float b);
int retSum(int a, int b);
float retDiv(float a, float b);



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
