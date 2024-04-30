#include <iostream> 
#include "child.h"

int main(){
    Child c1;
    c1.show_values();
    c1.print_var();

    c1.Parent::print_var(); //* Now we are using the parent 
    return 0;
}