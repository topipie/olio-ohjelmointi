#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car objCar("Toyota", "Corolla");
    //tulosteteen ennakkoon määritetyt tiedot, voisin myös jättää car.cpp tiedotossa "tyhjäksi niin" sitten ei olisi ennakkoon määritettyyjä juttuja
    objCar.tulostaTiedot();

    //Halusin testinä muuttaa tietoja kun tässä meni tolkuttoman kauan

    //objCar.setObjEngine(make_unique<Engine>(548, 3.0));

    //objCar.setObjWheel1(make_unique<Wheel>(18, "Kitkat"));
    //objCar.setObjWheel2(make_unique<Wheel>(18, "Kitkat"));
    //objCar.setObjWheel3(make_unique<Wheel>(18, "Kitkat"));
    //objCar.setObjWheel4(make_unique<Wheel>(18, "Kitkat"));

    //muutetut tiedot
    //objCar.tulostaTiedot();


    return 0;
}
