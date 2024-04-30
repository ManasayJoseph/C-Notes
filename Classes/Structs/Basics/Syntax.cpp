// #include <iostream> 

// //* Class : everything private by default
// class Dog{
//     public: //* Changing to public
//     std::string m_name;
// };

// //* Struct : everything public by default
// struct Cat{
//     std::string m_name;
// };

// //* Struct is commonly used when we want to put direct member variables
// struct Point{
//     double x ;
//     double y;

// };

// void print_point( const Point& point){
//     std::cout << "(" << point.x << ", " << point.y << ")" << std::endl;
// }


// int main(){
//     Dog dog1;
//     Cat cat1;

//     // dog1.m_name = "fluffy"; //* Err
//     cat1.m_name = "garfield"; //* Ok
//     std::cout << cat1.m_name << std::endl;
//     Point point1;
//     point1.x = 40.4;
//     point1.y = 20.7;
//     print_point(point1);
//     return 0;
// }