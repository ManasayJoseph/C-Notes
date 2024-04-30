// //! Ctrl + A then Ctrl + K + U
// #include <iostream> 
// #include <string>



// class Dog{
//     public:
//         Dog() = default;
//         Dog(std::string_view name_param , std::string_view breed_param, int age_param);
//         ~Dog(); //* Deconstructor cant have parameters

//         void print_info(){
//             std::cout << "Dog name : " << this << "    name    " << name << "  breed  " << breed << "  age  " << *p_age << std::endl ;
//         }

//         //* Setters
//         //* The dog* syntax is little hard to understand.
//         //* It is used for returning the "this" pointer.
//         //* Dog* just means it will be returning a pointer of the class.
//         Dog* set_dog_name(std::string_view name){
//             // name = name; //* This is an error because both have same name
//             this->name = name;
//             return this; //* This is the correct way to do it
//         }
//         // set_dog_breed
//         Dog* set_dog_breed(std::string_view breed){
//             this->breed = breed;
//             return this;
//         }
//         Dog* set_dog_age(int age){
//             *(this->p_age) = age;
//             return this;
//         }

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
//     //* We are printing out address of constructed dog object
//     //* "this" pointer gives the address of the object that is being constructed
//     std::cout << "Dog constructor called for : " << name << "   at   " << this << std::endl ;
// }
// Dog::~Dog(){
//     delete p_age;
//     //* We are printing out address of constructed dog object
//     //* "this" pointer gives the address of the object that is being destructed
//     std::cout << "Dog destructor called for : " << name << "    at  " << this << std::endl ;

// } //* Deconstructor



     
// int main(){
//     Dog dog1("Jimmy","shepherd",2);
    
//     dog1.print_info();
//     dog1.set_dog_name("Pumba");
//     dog1.set_dog_breed("Lab");
//     dog1.set_dog_age(3);
//     dog1.print_info();

//     //* Chaining functions 
//     //! Uncomment when you reach here
//     //* We can also use the "->" operator to chain functions/methods
//     // dog1.set_dog_name("Dooby")->set_dog_breed("Wire Fox Terrier")->set_dog_age(4);
//     // dog1.print_info();


//     std::cout << "Done" << std::endl;
//     return 0;
// }