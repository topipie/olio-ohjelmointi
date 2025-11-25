#include "car.h"
#include <iostream>
using namespace std;


Engine*Car::getObjEngine() const
{
    return objEngine.get();
}

void Car::setObjEngine(unique_ptr<Engine> newObjEngine)
{
    objEngine = std::move(newObjEngine);
}

Wheel*Car::getObjWheel1() const
{
    return objWheel1.get();
}

void Car::setObjWheel1(unique_ptr<Wheel> newObjWheel1)
{
    objWheel1 = std::move(newObjWheel1);
}

Wheel*Car::getObjWheel2() const
{
    return objWheel2.get();
}

void Car::setObjWheel2(unique_ptr<Wheel> newObjWheel2)
{
    objWheel2 = std::move(newObjWheel2);
}

Wheel*Car::getObjWheel3() const
{
    return objWheel3.get();
}

void Car::setObjWheel3(unique_ptr<Wheel> newObjWheel3)
{
    objWheel3 = std::move(newObjWheel3);
}

Wheel*Car::getObjWheel4() const
{
    return objWheel4.get();
}

void Car::setObjWheel4(unique_ptr<Wheel> newObjWheel4)
{
    objWheel4 = std::move(newObjWheel4);
}

void Car::tulostaTiedot()
{
    cout <<"Auto: " << brand << " " << model << endl;
    cout <<"Moottori: " << objEngine->getHorsepower() <<"hp, " << objEngine->getDisplacement() <<" L" <<endl;
    cout <<"Rengas 1: " << objWheel1->getSize() << "tuumaa, " << objWheel1->getType() << endl;
    cout <<"Rengas 2: " << objWheel2->getSize() << "tuumaa, " << objWheel2->getType() << endl;
    cout <<"Rengas 3: " << objWheel3->getSize() << "tuumaa, " << objWheel3->getType() << endl;
    cout <<"Rengas 4: " << objWheel4->getSize() << "tuumaa, " << objWheel4->getType() << endl;
}

Car::Car(string b, string m)
{
    model = m;
    brand = b;
    objEngine = make_unique<Engine>(150,2.0);
    objWheel1 = make_unique<Wheel>(17, "Kesarengas");
    objWheel2 = make_unique<Wheel>(17, "Kesarengas");
    objWheel3 = make_unique<Wheel>(17, "Kesarengas");
    objWheel4 = make_unique<Wheel>(17, "Kesarengas");

    cout << "Car " << model << " luotiin" << endl;

}
