#include "dog.h"
#include <iostream>

using namespace std;

Dog::Dog() {}

void Dog::callOut()
{
    cout << "Koira aantelee" <<endl;
}

Dog::~Dog()
{
    cout << "Koira olio tapettu" <<endl;
}
