// #include <iostream>//! Ctrl + A then Ctrl + K + U
// #include <concepts>


// template <typename T>
// concept TinyType = requires ( T t){
// 	sizeof(T) <=4; // Simple requirement
// 	requires sizeof(T) <= 4; // Nested requirement
// };


// template <typename T>
// // requires std::integral<T> || std::floating_point<T> //* OR operator
// // requires std::integral<T> && TinyType<T>
// requires std::integral<T> && requires ( T t){
// 	sizeof(T) <=4; // Simple requirement
// 	requires sizeof(T) <= 4; // Nested requirement
// }


// T add(T a, T b){
//     std::cout << a << b << std::endl;
//     return a + b;
// }



// int main(){

//     char message {'e'};
//     std::cout << &message[0] << std::endl;
    
    

//     std::cout << add<int>(message,message) << std::endl;    

   
//     return 0;
// }
