// #include <iostream> //! Ctrl + A then Ctrl + K + U

// int main(){
//     int c1{42};
//     //* This equal sign captures everything by value
//     auto func2 = [=](){
//         std::cout << "Inner value : " << c1 << " &inner : " <<&c1 <<  std::endl;
//     };
    
//     for(size_t i{} ; i < 5 ;++i){
//         std::cout << "Outer value : " << c1 << " &outer : " << &c1 << std::endl;
//         func2();
//         ++c1;
//     }

//     std::cout << std::endl; 

//     int c3{42};
//     //* This ampersand sign captures everything by reference
//     auto func3 = [&](){
//         std::cout << "Inner value : " << c3 << " &inner : " <<&c3 <<  std::endl;
//     };
    
//     for(size_t i{} ; i < 5 ;++i){
//         std::cout << "Outer value : " << c3 << " &outer : " << &c3 << std::endl;
//         func3();
//         ++c3;
//     }
// }