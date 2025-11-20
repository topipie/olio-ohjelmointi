#include <iostream>

#include "Dog.h"

using namespace std;

int main()
{
    //TÄLLÄ VERSIOLLAKIN TOIMII, MUTTA MINUA HÄIRITSI KUN TULOSTUI KAHDESTI "ANIMAL OLIO TAPETTU" ja SEN PERÄÄN "KOIRA OLIO TAPETTU"

    //Animal objectAnimal;
    //Dog objectDog;

    //objectAnimal.callOut();
    //objectDog.callOut();

    //TOINEN TAPA TEHDÄ - Muista tuhota oliot

    Animal* ptrAnimal = new Animal();
    Animal* ptrDog = new Dog();

    ptrAnimal->callOut();
    ptrDog->callOut();

    delete ptrAnimal;
    delete ptrDog;

    ptrAnimal = nullptr;
    ptrDog = nullptr;




    return 0;
}
