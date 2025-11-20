#include <iostream>
#include "italianchef.h"

using namespace std;

int main()
{
    //Chef chef("Gordon Ramsay");
    //chef.makeSalad();
    //chef.makeSoup();

    ItalianChef ichef("Anthony Bourdain ");
    ichef.makeSalad();
    ichef.makeSoup();
    ichef.makePasta();
    cout <<"name of the Italian Chef is " << ichef.getName()<<endl;
    return 0;
}
