#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "engine.h"
#include "wheel.h"
#include<memory>

using namespace std;


class Car
{
private:
    unique_ptr<Engine> objEngine;
    unique_ptr<Wheel> objWheel1;
    unique_ptr<Wheel> objWheel2;
    unique_ptr<Wheel> objWheel3;
    unique_ptr<Wheel> objWheel4;

    string model;
    string brand;
public:
    Car(string, string);


    Engine*getObjEngine() const;
    void setObjEngine(unique_ptr<Engine> newObjEngine);
    Wheel*getObjWheel1() const;
    void setObjWheel1(unique_ptr<Wheel> newObjWheel1);
    Wheel*getObjWheel2() const;
    void setObjWheel2(unique_ptr<Wheel> newObjWheel2);
    Wheel*getObjWheel3() const;
    void setObjWheel3(unique_ptr<Wheel> newObjWheel3);
    Wheel*getObjWheel4() const;
    void setObjWheel4(unique_ptr<Wheel> newObjWheel4);

    void tulostaTiedot();
};

#endif // CAR_H
