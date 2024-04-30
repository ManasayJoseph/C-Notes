//! Ctrl + A then Ctrl + K + U
// #include <iostream> 
// #include <cstring>
// #include "person.h"

//* Variable
// double weight {};
//! One definition rule doesnt allow a variable to defined and declared multiple times.
//* It does not work even if in different files...
//! One definition rule is there for functions as well. 
//* Declaration is doing : double result;
//* Definition is : double result {30};
//* By the way a function can be declared first and then defined in another set of lines 
// double add (double a , double b); 

//* This is the base syntax of classes don't worry I don't know this either 
/*
struct Point {
    double m_x {0};
    double m_y {0};
};*/
//! One definition rule is not present for classes thus I can define this class in another file but not in the same file.
//query refer the section about One-definition rule to see how classes are done here.
//query check out person.h file . We are going to learn when they are in different files 

/*
int main(){   
    //* Simple use of class :
    /*
    Person p1("John",35); //* Use of person.h file
    p1.print_info(); //* Use of person.h file
    */

    //* use of Point class
    /*
    Point p2 ;
    std::cout << p2.m_x;
    //* go to : ./@Point 
    */

    //* return to everything.cpp
    
/*    return 0;
}
*/
