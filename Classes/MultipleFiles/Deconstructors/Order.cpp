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



     
// int main(){
//     Dog dog1("Doggy1","Shepherd",1);//* Deconstructors work backwards so doggy4 will be deleted first
//     Dog dog2("Doggy2","Shepherd",1);//* Deconstructors work backwards so doggy4 will be deleted first
//     Dog dog3("Doggy3","Shepherd",1);//* Deconstructors work backwards so doggy4 will be deleted first
//     Dog dog4("Doggy4","Shepherd",1);//* Deconstructors work backwards so doggy4 will be deleted first

//     return 0;
// }