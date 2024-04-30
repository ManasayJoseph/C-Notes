// //! Ctrl + A then Ctrl + K + U
// #include <iostream>
// #include <string>


// class Dog{
//     public:
//         Dog() = default;
//         Dog(std::string_view name_param , std::string_view breed_param, int age_param);
//         ~Dog(); //* Deconstructor cant have parameters
//     private :
//         std::string name;
//         std::string breed;
//         int * p_age{nullptr};
// };
// //* Prototype for Dog constructor        
// Dog::Dog(std::string_view name_param , std::string_view breed_param, int age_param){
//     name = name_param;
//     breed= breed_param;
//     p_age = new int;
//     *p_age = age_param;
//     std::cout << "Dog constructor called for : " << name << std::endl ;
// }
// Dog::~Dog(){
//     delete p_age;
//     std::cout << "Dog destructor called for : " << name << std::endl ;

// } //* Deconstructor

// void some_func(){
//     Dog my_dog("Flu ffy","Sheperd",2);
//     std::cout << "Dog destructor called for : some_func"<< std::endl ;
//     //* Destructor is automatically called here as the object is going out of scope 
// }



// int main(){
//     //Dog my_dog("Fluffy","Sheperd",2);
//     some_func();
//     std::cout << "DONE!"  << std::endl;
//     return 0;
// }