// //! Ctrl + A then Ctrl + K + U
// #include <iostream>


// const double PI {3.1415926535897932384626433832795};

// class Cylinder {
//     //* as long as we dont public this . this cannot be used by outside
//     public : //* It is recommended that we align it properly after public statement.  
//         double volume(){ //* This is just a normal function.
//             return PI * base_radius * base_radius * height;
//         }
//         void addresses(){
//             std::cout << base_radius << std::endl;
//             std::cout << &base_radius << std::endl;
//             std::cout << height << std::endl;
//             std::cout << &height << std::endl;  
//             std::cout << volume() << std::endl;    
//         }


//     //* Member Variables 
//     //* Because of the public above the following variables are also public . unless we private them
//     public : 
//         double base_radius{1};
//         double height {1};


// };//* We need to end with a semicolon


// int main (){
//     Cylinder cylinder1; //* This is called an object
//     // std::cout << "base_radius  " << cylinder1.base_radius<< std::endl; //* error: because private..
//     // std::cout << "height  " << cylinder1.height<< std::endl; //* error: because private..
//     // cylinder1.addresses();

//     //* Changing the data inside class
//     cylinder1.base_radius = 10;
//     cylinder1.height = 3;

//     // cylinder1.addresses();

//     // std::cout << "base_radius  " << cylinder1.base_radius<< std::endl; //* error: because private..
//     // std::cout << "base_radius  " << cylinder1.base_radius<< std::endl; //* error: because private..
//     // std::cout << "height  " << cylinder1.height<< std::endl; //* error: because private..
//     // std::cout << "height  " << cylinder1.height<< std::endl; //* error: because private..

//     double * height = &cylinder1.height;
//     std::cout << &cylinder1.height << std::endl;
//     std::cout << &height << std::endl; 

//     cylinder1.addresses();


//     std::cout << "volume"  << cylinder1.volume() << std::endl;
// }