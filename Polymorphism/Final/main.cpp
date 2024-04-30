#include <iostream>
#include "animal.h"
#include "bird.h"
#include "feline.h"
#include "dog.h"
//Intersting fact #1
/*
class Plane final{
    Plane()=default;
};

//This will trigger a compiler error
class FigherJet : public Plane{
    
};
*/

int main(){
    Dog dog1("Blue","Harley");
    Animal animal = dog1;
    dog1.breathe();
    animal.breathe();
    std::cout << "Hello" << std::endl;
    return 0;
}