#ifndef CYLINDER_H//* THESE ARE INCLUDE GUARDS
#define CYLINDER_H//* THESE ARE INCLUDE GUARDS

#include "constants.h"

//* 3. With definintion and declaration in same class
//* Created a cylinder.cpp file
// class Cylinder { //? This commented section is the syntax before step 3.
//     public : 
//         //Constctors
//         Cylinder() = default;
//         Cylinder(double rad_param,double height_param){
//             base_radius = rad_param;
//             height = height_param; //* Moved this constructor cylinder.cpp
//         }
//         //Functions (methods)
//         double volume(){
//             return PI * base_radius * base_radius * height;
//         }
        
//         //Setter and getter methods
//         double get_base_radius(){
//             return base_radius;
//         }
//         double get_height(){
//             return height;
//         }

//         void set_base_radius(double rad_param){
//             base_radius = rad_param;
//         }

//         void set_height(double height_param){
//             height = height_param;
//         }
//     private : 
//         //Member variables
//         double base_radius{1};
//         double height{1};
// };


class Cylinder { 
    public : 
        //* Constructors
        Cylinder() = default;
        Cylinder(double rad_param , double height_param); //* Second constructor. //* Defined in cylinder.cpp
        //*Functions (methods)
        double volume();
        
        //Setter and getter methods
        double get_base_radius();
        double get_height();

        void set_base_radius(double rad_param);

        void set_height(double height_param);
    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};
#endif