// #include <iostream>//! Ctrl + A then Ctrl + K + U

// #include <concepts>

// //* Simple Requirements : Select this parts and uncomment while learning this then comment it back again
// // template <typename T>
// // concept TinyType = requires (T t){
// //     sizeof(T) <= 4;//* This does not work as expected. This only checks if this is valid syntax in C++
// //     //* Check how this works using double as given type.
// // };



// //* Nested Requirements : Select this parts and uncomment while learning this then comment it back again
// // template <typename T>
// // concept TinyType = requires (T t){
// //     sizeof(T) <= 4;//* This does not work as expected. This only checks if this is valid syntax in C++
// //     requires sizeof(T) <= 4; //* Now this will work as this is a nested requirement.
// //     //* Here the sizeof(T) has to be less than or equal to 4
// // };



// //* Compound Requirements : Select this parts and uncomment while learning this then comment it back again
// template <typename T>
// concept Addable = requires (T a , T b){
//     //* No except is optional. the commented section in middle 
//     {a + b} /*noexcept*/ -> std::convertible_to<int>;
//     //* This checks if a + b is valid syntax and if doesnt throw errors , checks if result 
//     //* is convertible to int;
// };

// //! Uncomment while learning Tinytypes
// // TinyType auto add( TinyType auto a , TinyType auto b ){
// //     return a + b; 
// // }

// //! Uncomment while learning Addable
// Addable auto add( Addable auto a , Addable auto b ){
//     return a + b; 
// }

// int main()
// {
//     char x{67};
//     char y {34};

//     // std::string x {"Hello"};//* This will not work while learning Addables
//     // std::string y {"World"};//* This will not work while learning Addables
//     // //* Becuase the variables have to be a convertible.


//     auto result = add(x , y);
//     std::cout << result << std::endl;

//     std::cout << sizeof(result) << std::endl; 
//     std::cout << sizeof(x) << std::endl; //* You can see here the size of char is 1 . 
//     //*But with conversions it has been changed to int size
//     return 0;
// }
