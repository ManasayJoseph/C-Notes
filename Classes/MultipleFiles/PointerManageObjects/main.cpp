// //! Ctrl + A then Ctrl + K + U
// #include <iostream>
// #include "cylinder.h"


// //? ORGANISING CODE TO MULTIPLE FILES




// int main(){
//     Cylinder cylinder1(10,100);
 
//     //* Managing a object through pointers 
//     Cylinder* p_cylinder1 = &cylinder1;
//     std::cout << "volumme of p_cylinder" << (*p_cylinder1).volume() <<  std::endl; 
//     //* This code is pretty ugly and we have another way to do this 
//     //* We can use the -> operator to access the members of the object
//     std::cout << "volume with -> " << p_cylinder1->volume() << std::endl;



//     //* Cylinder object on the heap
//     Cylinder* p_cylinder2 = new Cylinder(100,2); //* Remember to release heap memory
//     std::cout << "p_cylinder2 volume with -> " << p_cylinder2->volume() << std::endl;
//     std::cout << "base_rad (cyl2)  " << p_cylinder2->get_base_radius()  << std::endl;
    
    
//     delete p_cylinder2;

//     return 0;
// }