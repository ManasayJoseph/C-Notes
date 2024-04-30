// #include <iostream>//! Ctrl + A then Ctrl + K + U
// #include <cstring>
// template <typename T> T maximum(T a,T b){
//     return (a > b ) ? a : b;
// } 

// template <> //* Template specialization
// const char * maximum<const char*> (const char * a, const char * b){
//     return (std::strcmp(a , b) > 0) ? a : b;
// }

// int main()
// {
//     int a{10};
// 	int b{23};
// 	double c{34.7};
// 	double d{23.4};
// 	const char* e {"hello"};
// 	const char*  f {"world"};
//     auto max_int = maximum<int>(a,b);  //* Int type deduced
//     auto max_double = maximum<double>(c,d);  //* Int type deduced
//     auto max_str = maximum(e,f);  //* Int type deduced

//     std::cout << max_int << std::endl;
//     std::cout << max_double  << std::endl;
//     std::cout << max_str << std::endl;
//     return 0;
// }
