#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_shape(Shape* s){ //* Using Shape return type is also fine 
    s->draw();

}
// More functions as you deal with more shape types. 30 ? 70? 100? It's messy.

void draw_shape(Shape& s_r){ //* Using overloading
    s_r.draw();
}


int main(){
    std::cout << "size of (shape)" << sizeof(Shape) << std::endl; //* Dynamic 40
    std::cout << "size of (Circle)" << sizeof(Circle) << std::endl;//* Dynamic 56
    std::cout << "size of (Oval)" << sizeof(Oval) << std::endl; //* Dynamic 56

    //* After removing virtual keyword
    std::cout << "size of (shape)" << sizeof(Shape) << std::endl; //* Non-virtual 32
    std::cout << "size of (Circle)" << sizeof(Circle) << std::endl;//* Non-virtual 48
    std::cout << "size of (Oval)" << sizeof(Oval) << std::endl; //* Non-virtual 48

    //* Slicing
    //* We can assign a Circle to a Shape and the compiler will automatically slice the circle part 
    Circle circle (3.3 , "Circle1");
    Shape shape = circle ;
    shape.draw();
    
    return 0;
}