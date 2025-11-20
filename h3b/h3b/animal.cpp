#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {}

void Animal::callOut()
{
    cout<<"Elain aantelee"<<endl;
}

Animal::~Animal()
{
    cout << "Animal olio tapettu" << endl;
}
