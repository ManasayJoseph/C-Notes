//! Ctrl + A then Ctrl + K + U
// #include <iostream>  
// #include <string>

// template <typename T> 
// T maximum(T a , T b){ 
//     return (a > b)? a : b;  
// } 

// template <typename T>
// T multiply (T a , T b){
//     return a * b;
// }
// int main(){
//     //* Select all of the code here and paste it in https://cppinsights.io/ to see how templates are compiled    
//     int x{210};
//     int y{442};

//     int* p_x {&x};
//     int* p_y{&y};
//     auto result = maximum(p_x,p_y); //* The above function can only handle one datatype for both arguments
//     //* Comparing with pointers kind of breaks the code because the pointers are being compared and not the values
//     std::cout << "result : " << result << std::endl;

//     //? Using the debug menu . Please watch the video at https://youtu.be/8jLOx1hD3_o?si=Wy8pQzxHCEwlxfVJ&t=65290

//     return 0;
// }