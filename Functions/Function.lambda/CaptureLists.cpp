// #include <iostream> //! Ctrl + A then Ctrl + K + U

// int main(){

//     //? Capture lists
    
//      double a{10};
//      double b{20};
     
//      auto func = [a,b](){
//          std::cout  << "a + b : " << a + b << std::endl;
//      };
//      func();
    

//     //* Capturing by value
    
//     int c{42};
    
//     auto func1 = [c](){
//         std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
//     };
    
//     for(size_t i{} ; i < 5 ;++i){
//         std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
//         func1();
//         ++c;
//     }

    

//     //* Capture by reference
//     int c1{42};
    
//     auto func2 = [&c](){
//         std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
//     };
    
//     for(size_t i{} ; i < 5 ;++i){
//         std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
//         func2();
//         ++c;
//     }
    
//     return 0;
// }