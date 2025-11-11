#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    carList.emplace_back("BMW","M3",2022);
    carList.emplace_back("Volvo","V70",2015);
    carList.emplace_back("BMW","428i",2016);

    cout<<"Tassa alkion 2 tiedot:" <<endl;
    carList[1].printData();

    cout<<"\nSeuraavaksi kaikki alkiot for silmukalla\n"<<endl;

    for(Car c : carList){
        c.printData();
    }

    return 0;
}
