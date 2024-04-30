#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main(){

    // Engineer eng1("Dev" , 27 , "Green sky" , 104);
    // std::cout << eng1 << std::endl;

    // Engineer eng2(eng1); //* This will work by default as compiler automatically inserts a copy constructor
    // std::cout << eng2 << std::endl;
    
    
    Engineer ceng1("Dan" , 15 , "Bob street #245" , 15);

    // CivilEngineer ceng2(ceng1);
    std::cout << ceng1<< std::endl;

    return 0;
}