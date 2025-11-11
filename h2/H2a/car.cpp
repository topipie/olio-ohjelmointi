#include "car.h"

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

Car::Car() {}

Car::Car(string brand, string model, int yearModel)
{
    this->brand = brand;
    this->model = model,
    this->yearModel = yearModel;
}

void Car::printData()
{
    cout<<"Auton tiedot:"<<endl;
    cout<<"Merkki: "<<this->brand<<endl;
    cout<<"Malli: "<<this->model<<endl;
    cout<<"Valmistusvuosi: "<<this->yearModel<<endl;
    cout<<"**************************************"<<endl;
}

Car::~Car()
{
    cout<<"OLIO TUHOTTU"<<endl;
    cout<<"**************************************"<<endl;
}
