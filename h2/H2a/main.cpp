#include <iostream>
#include "car.h"
#include "Rectangle.h"
#include "student.h"

using namespace std;
#include<memory>

int main()
{
    Car *objectCar1=new Car("BMW","M3",2025);
    objectCar1->printData();
    //tuhoa olio <-- muista!!!
    delete objectCar1;
    objectCar1 = nullptr;

    unique_ptr<Car> objectCar2 = make_unique<Car>("Volvo","V70",2017);
    objectCar2->printData();
    //muutetetaan kaikki tiedot
    objectCar2->setYearModel(2025);
    objectCar2->setBrand("Volvo");
    objectCar2->setModel("V40");
    objectCar2->printData();

    cout<<"TAHAN PAATTYY AUTOILLA TESTAUS"<<endl;
    cout<<"SEURAAVAKSI PINTA-ALAA JA YMPARYSMITTAA"<<endl;

    unique_ptr<Rectangle> objectRectangle1 = make_unique<Rectangle>(5,3);
    cout << "Suorakulmion pinta-ala: "<< objectRectangle1->getArea() << endl;
    cout << "Suorakulmion ymparysmitta: "<< objectRectangle1->getCircum() << endl;

    unique_ptr<Rectangle> objectRectangle2 = make_unique<Rectangle>();
    //setataan käsin
     cout << "Seuraava lasku: "<<endl;
    objectRectangle2->setHeight(7);
    objectRectangle2->setWidth(8);
    cout << "Suorakulmion pinta-ala: "<< objectRectangle2->getArea() << endl;
    cout << "Suorakulmion ymparysmitta: "<< objectRectangle2->getCircum() << endl;

    cout<<"TAHAN PAATTYY PINTA-ALA YMS TESTAUS"<<endl;
    cout<<"SEURAAVAKSI STUDENT JUTTUJA"<<endl;

    unique_ptr<Student> objectStudent1 = make_unique<Student>();
    objectStudent1->setName("Tauno Testaaja");
    objectStudent1->setStudentNumber(134665);
    objectStudent1->setAverage(4.47);
    cout << "Opiskelijan nimi on "<< objectStudent1->getName() << " ja hanen opiskelija tunnus on: " << objectStudent1->getStudentNumber() << " seka hanen keskiarvoksi on saatu laskettua: " << objectStudent1->getAverage()<< endl;


return 0;
}
