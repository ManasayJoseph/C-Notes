// //! Ctrl + A then Ctrl + K + U
// #include <iostream>

// const double PI {3.1415926535897932384626433832795};

// class Cylinder {
//     public :

//         //* Constructors
//         Cylinder() = default; //* This line brings back a constructor with nothing
//         Cylinder(double base_param,double height_param){ 
//             base_radius = base_param;
//             height = height_param;
//         }

//         //* Functions (methods)
//         double volume(){ 
//             return PI * base_radius * base_radius * height;
//         }

//         //* Setter And Getter methods

//         //* Getters
//         double get_base_radius(){
//             return base_radius;
//         }
//         double get_height(){
//             return height;
//         }

//         //* Setters

//         void set_base_radius(double base_radius_param){
//             base_radius = base_radius_param;
//         }

//         void set_height(double height_param){
//             height = height;
//         }


//     private : 

//         double base_radius{1};
//         double height {1};

// };

// int main(){
//     Cylinder cylinder1(10,3); //* This runs the constructor ands sets the base_radius and height to 2.0
//     std::cout << cylinder1.volume() << std::endl;
//     std::cout << cylinder1.get_base_radius() << std::endl; //*Using getter to get the base_radius and height
//     cylinder1.set_base_radius(106.0);  //*Using setter to set base_radius
//     std::cout << cylinder1.volume() << std::endl; //*Using the volume function
//     return 0;
// } 