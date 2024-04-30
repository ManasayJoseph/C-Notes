// //! Ctrl + A then Ctrl + K + U
// #include <iostream>
// #include <concepts>
// #include <type_traits>
// #include <string>
// //* Syntax 1
// template <typename T>
// concept MyConcept = std::is_integral_v<T>;

// //* Syntax 2
// template <typename T> 
// concept Multipliable = requires(T a , T b) {
//     a * b; //* This just makes sure that with the given parameters syntax is valid
//     //* Checking if the multiplication operator works here
// };

// //* Syntax 3
// template <typename T>
// concept Incrementable = requires(T a){
//     a++; //! This only checks for syntax not value
//     ++a;
//     a+=1;
// };


// template <typename T>
// requires MyConcept<T>
// T add (T a, T b){return a + b;}

// template <typename T>
// requires Multipliable<T>
// T multiply(T x , T y){
//     return x * y;
// }

// template <typename T>
// requires Incrementable<T>
// T Increment(T x , T y){
//     return x + y;
// }

// int main (){
//     int x {6 };
//     int y { 7 };
//     std::cout << add(x , y ) << std::endl;
//     std::cout << Increment(x , y ) << std::endl;
//     std::cout << multiply(x , y );
//     return 0;
// }