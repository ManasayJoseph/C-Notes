// //! Ctrl + A then Ctrl + K + U
// #include <iostream>
// // #include "constants.h" //* We need to use double quotes because it our own file.
// //* We don't need to import constants again because we have already imported it in the cylinder.h file.
// #include "cylinder.h" //* Adding the cylinder file


// //? ORGANISING CODE TO MULTIPLE FILES


// //* 1.First thing we do is changed the constant to another file. 
// // const double PI {3.1415926535897932384626433832795}; //* Moved this to constants.h

// //* 2.Second thing we do is move the entire class to another file
// //* 3.Third thing we do is move the functions inside the class to another file called cylinder.cpp
// //* Check the cylinder.h to see how I did this.
// // class Cylinder {
// //     public : 
// //         //Constctors
// //         Cylinder() = default;
// //         Cylinder(double rad_param,double height_param){
// //             base_radius = rad_param;
// //             height = height_param;
// //         }
// //         //Functions (methods)
// //         double volume(){
// //             return PI * base_radius * base_radius * height;
// //         }
        
// //         //Setter and getter methods
// //         double get_base_radius(){
// //             return base_radius;
// //         }
// //         double get_height(){
// //             return height;
// //         }

// //         void set_base_radius(double rad_param){
// //             base_radius = rad_param;
// //         }

// //         void set_height(double height_param){
// //             height = height_param;
// //         }
// //     private : 
// //         //Member variables
// //         double base_radius{1};
// //         double height{1};
// // };



// int main(){
//     Cylinder cylinder1(10,100);
//     std::cout << cylinder1.volume() << std::endl;
    
//     return 0;
// }