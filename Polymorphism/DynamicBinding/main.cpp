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

    Shape shape1("Shape1");

    Oval oval1(2.0,3.5,"Oval1");

    Circle circle1(3.3,"Circle1");




    //? Best way to draw shapes
    //* We have one funtction to draw hundreds of thousands functions
    //* We will learn this in the next part 
    //* We using the virtual keyword made it work
    Shape * shape_ptr = &shape1;
    // shape_ptr->draw();

    shape_ptr = &oval1;
    // shape_ptr->draw(); //* Draw an oval

    shape_ptr = &circle1;
    // shape_ptr->draw();

    Shape &shape_r = oval1;

    draw_shape(shape_ptr);
    draw_shape(shape_r);

    //* Dynamic binded Array
    Shape* shape_collection[]{&shape1 ,&oval1 , &circle1};

    for (Shape* s_ptr : shape_collection){
        s_ptr->draw();
    }

    return 0;
}