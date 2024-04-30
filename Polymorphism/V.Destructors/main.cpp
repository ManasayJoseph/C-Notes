#include <iostream>
#include "dog.h" // * This will automatically include parent classes


int main(){
    //Dog dog1; //* This works like we expect

    //* Before adding virtual keyword
    //* This (Following) only calls Animal's destructor.
    //      Animal* p_animal = new Dog;
    //      delete p_animal;

    //* After adding virtual keyword
    //* This code will call all the destructors;
    Animal* p_animal = new Dog;
    delete p_animal;
    return 0;
}