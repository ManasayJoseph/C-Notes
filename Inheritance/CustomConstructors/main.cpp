#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){
    Person p1("Devin Johl" , 27 , "Winter fall");
    std::cout << p1 << std::endl;

    Engineer e1("Dev" , 27 , "Green sky" , 104);
    std::cout << e1 << std::endl;

    CivilEngineer ce1("Johnny d" , 27 , "Green sky57" , 4 , "noob");
    std::cout << ce1 << std::endl;

    

    return 0;
}