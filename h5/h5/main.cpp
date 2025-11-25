#include <iostream>
#include "classa1.h"
#include "classb.h"
#include "classa2.h"


using namespace std;

int main()
{
    //pointter harjoitus
    int a =5;
    int *pointter_a = &a;
    cout << "a:n arvo on: " <<a<< " ja osoite on: "<<&a<< endl;

    cout << "\nPointterin antama osoite on " <<pointter_a<< endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " <<*pointter_a<< endl;


    //referenssi kohta
    int &refA = a;

    cout << "\nrefA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA osoittaman muistipaikan arvo on: " << refA << endl;

    //lisätään muuttuja b

    int b = 6;

     cout << "\nb:n arvo on: " <<b<< " ja osoite on: "<<&b<< endl;

     //Kokeile: Voiko refA vaihtaa osoittamaan b:tä
     //refA = &b;                //EI VOINUT TÄMÄ ANTOI PUNAISTA VALOA
     //refA=b;

    //cout << "\nb:n arvo on: " <<refA<< endl; //tässä testattu sekä "refA" ja "a". Tämä sijoitus muuttaa kokonaan arvon a

     pointter_a = &b; // Ainakin meni läpi?

     cout << "\nKun vaihdoin pointterin A osoittamaan b:hen " <<endl;
     cout << "Pointter A osoittaa osoitteeseen " <<pointter_a<<endl;
     cout << "Pointterin osoittaman muistipaikan arvo on " <<*pointter_a<<endl;

     cout << "\nRefA osoittaa vielakin alkuperaiseen a osoitteeseen: " <<&refA<<endl;
     cout << "RefA osoittaman muistipaikan arvo on " <<refA<<"\n"<<endl;


     ClassB objB;
     objB.setInfo("Olion B asettama info");

     ClassA1 objA1(objB);
     objA1.setBinfo("Olion objA1 asettama info");

     cout<<"objB: "<<objB.getInfo()<<endl;
     cout<<"objA1: "<<objA1.getBinfo()<<endl;

     cout<<"\n "<<endl;

     ClassB &refB=objB;
     ClassA2 objA2(refB);
     objA2.setBinfo("Olion Agr asettama info");
     cout<<"objB: "<<objB.getInfo()<<endl;
     cout<<"objA2 "<<objA2.getBinfo()<<endl;
     cout<<endl;







    return 0;
}
