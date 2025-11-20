#include "italianchef.h"
#include <iostream>


using namespace std;




ItalianChef::ItalianChef(string n): Chef(n)
{
    cout<<"Italian Chef "<< this->name <<" konstruktori "<<endl;
}

string ItalianChef::getName()
{
    return name;
}



void ItalianChef::makePasta()
{
    //cout<< "Chef " << this->getName() <<" makes pasta"<<endl;
    cout<< "Italian Chef "<< this->name <<" makes pasta"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian Chef "<< this->name<< " desktruktori " <<endl;
}

