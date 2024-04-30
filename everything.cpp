#include <iostream>     //IGNORE THIS UNTIL SAID TO READ
#include <cmath>        //IGNORE THIS UNTIL SAID TO READ
#include <string>       //IGNORE THIS UNTIL SAID TO READ
#include <cstring>       //IGNORE THIS UNTIL SAID TO READ
//*? IMPORT SECTION ABOVE

//! You can also study by cloning the following repostry and going accordingly to get all example code
//? https://github.com/rutura/The-C-20-Masterclass-Source-Code/tree/main





//? SOME TERMS USED HERE 
//* DRY (Don't Repeat yourself)
//* BTW (By the way)
//* Integral (Anything that can be represented as integer)
//* Init ( Initialization / Initializing )
//* Params ()
int add(int num1, int num2){return num1 + num2;}// IGNORE THIS

//! BETTER COMMENTS IS NOT SUPPORTED BY CLANG.

int everything()
{


    /*
    //*                        B A S I C S 
    //*  __     ___    ____  ___    _    ____  _     _____ ____    
    //*  \ \   / / \  |  _ \|_ _|  / \  | __ )| |   | ____/ ___|  
    //*   \ \ / / _ \ | |_) || |  / _ \ |  _ \| |   |  _| \___ \  
    //*    \ V / ___ \|  _ < | | / ___ \| |_) | |___| |___ ___) | 
    //*     \_/_/   \_\_| \_\___/_/   \_\____/|_____|_____|____/  
    //*          ___   _   _   ____    _   _   _____   ____  
    //*         |_ _| | \ | | |  _ \  | | | | |_   _| / ___| 
    //*          | |  |  \| | | |_) | | | | |   | |   \___ \ 
    //*          | |  | |\  | |  __/  | |_| |   | |    ___) |
    //*         |___| |_| \_| |_|      \___/    |_|   |____/ 
    //*                        AND MANY MORE
    */


    //* FIRST THING TO REMEMBER "" and '' in C++ are not the same thing.

    // int data1 , data2; //* Initializing an Integer . Don't think anything of this
    
    //? CONSOLE INPUT AND OUTPUT
    //* CIN METHOD OF INPUT
    // std::cout << "Enter two numbers" << std::endl;
    // std::cin >> data1 >> data2; //*GETTING INPUT FROM CONSOLE
    // std::cout << data1 <<data2 << std::endl;
    // std::cout << data1 * data2 << std::endl;


    //* GET LINE METHOD OF GETTING INPUT
    //* Before If we were getting input from cin. But the data would break at spaces. 
    // std::getline(std::cin,data1);
    // std::getline(std::cin,data2);


    //? DATA TYPES AND VARIABLES 
    //* Variables : variables are containers which stores data . Structure of Variables:
    //* const(optional makes variable non-modifiable) data_type variable_name value(if initializing at the moment);
    //* Variables can be modified (if it is a not a const) whenever you want. Syntax:
    // variable_name = new_data; //*or you can use
    // variable_name {new_data};

    //! REMEMBER : INT IS THE SMALLEST TYPE ON WHICH OPERATIONS CAN BE DONE.
    //* So even smaller type's size will be changed to int

    //* Data Types : Data types are different types a variable can be . Each has unique properties.
    //* These are some of the data types in  C++:
    //* int , bool , char , float , double , auto
    //* int : can only have integers ,
    //* bool : can have either true or false values ,
    //*  char : Holds one character
    //* float : holds decimal values (smaller size than doubles) , 
    //* double : holds decimal values (can handle more values than floats)
    //* auto : depending on the data given chooses one of the above as the data type.

    //* Modifiers : There are some keywords that modify some data types . Below is a table for that 
    //* Keyword             What it does                                        Works on (data types)
    //*    long                increases size of var                               int , double 
    //*    long long           increase size even more                             int , double
    //*    short               decrease size of var                                int 
    //*    unsigned            makes int handle only positive digits               int
    //*    signed (default)    makes int handle both negative and positive digits  int

    //? SIZEOF function
    //* Gets the size of a given variable
    // std::cout << sizeof(int);





    //?SUFFIX AND PREFIX INCREMENT

    //add(data1,data2); //* Run functions (You will learn about functions furether down)
    //std::cout << ++data1 << data2++ << std::endl; //*suffix and prefix increment
    //std::cout << "This is data1" << data1 << std::endl;

    //* You can study about std::cout styling from https://youtu.be/8jLOx1hD3_o?si=ep88YHxyGN7zOIy_&t=21363
    //* It is not included here

    

    //? SMALL USE OF CMATH LIBRARY
    //* Cmath is a library in c++ to do mathematics. There are many functions in cmath
    //* such as power , log , log10 , sqrt , etc... Below I have shown the use of power (pow) function
    // std::cout << "This is data1 ^ data2" << std::pow(data1,data2) << std::endl; 
    //* You will learn about libraries as you move forward




    /*
 
    //*       _____ _     _____        __   ____ ___  _   _ _____ ____   ___  _     
    //*      |  ___| |   / _ \ \      / /  / ___/ _ \| \ | |_   _|  _ \ / _ \| |    
    //*      | |_  | |  | | | \ \ /\ / /  | |  | | | |  \| | | | | |_) | | | | |    
    //*      |  _| | |__| |_| |\ V  V /   | |__| |_| | |\  | | | |  _ <| |_| | |___ 
    //*      |_|   |_____\___/  \_/\_/     \____\___/|_| \_| |_| |_| \_\\___/|_____|
    //*                    IF , ELSE IF AND ELSE STATEMENTS                                                         
 
    */

    //? IF STATEMENTS
    //* Runs body if a given condition is satisfied.
    //* if statements have 2 parts condition and body. If the condition is true then the body is executed 
    //* if condition is false : moves to the next part of the code.
    //* Example at the end of flow control section.

    //? ELSE IF STATEMENTS 
    //* Kind of same as if statement . But runs when if statements's condition is false.
    //* Example at the end of flow control section.

    
    //? ELSE STATEMENTS
    //* Runs when all else if statements and if statements are not satisfied.
    //* Example at the end of flow control section.

    //? Example for IF , ELSE IF and ELSE statements with above data 
    //if (data1 == 54){
    //    std::cout << "Data is :" << data1 << std::endl;
    //} else if (data1==53){
    //    std::cout << "Data is :" << data1 << std::endl;
    //} else {std::cout << "Else data is " << data1 << std::endl;}

    //? TERNARY OPERATORS : SYNTAX
    //* (condition) ? option1 : option2;
    //* This means if condition is true then run option1 else run option2





    
    //*                   _     ___   ___  ____  ____  
    //*                  | |   / _ \ / _ \|  _ \/ ___| 
    //*                  | |  | | | | | | | |_) \___ \ 
    //*                  | |__| |_| | |_| |  __/ ___) |
    //*                  |_____\___/ \___/|_|   |____/ 
    //*                    (Only) For and While Loops
    

    //? FOR LOOPS
    //* for loop with hard coded COUNT (72) ;
    //* for loop has 4 parts :
    //* iterator , condition , increment , body each seprated with semicolons
    //* 1. iterator is either left out (if already exists) or a variable is declared and initialized .
    //* 2.then the for loop checks if the condition is true then runs the body then runs the increment part 

    //for (iterator ; condition ; /*any of the prefix or suffix increment is fine*/++data1++){/*body*/}
    //for (data1 ; data1 < 72 ; data1++){
    //    std::cout << "I love C++ With data : " << data1 << std::endl;
    //}
    //std::cout << std::endl;
    //std::cout << std::endl;

    //? WHILE LOOPS
    //* Make the COUNT variable a constant. It is prefered to do so.
    //* Runs the body as long as the condition is true;
    // unsigned int COUNT {10}; //* initialization
    // unsigned int i {0}; // or size_t i {0}; //* initialization
    // while (i < COUNT){
    //     std::cout << "I Love C++" << std::endl;
    //     ++i ;
    // }
    // std::cout << "Loop Ended Beep Boop.." << std::endl;
    // std::cout << std::endl;
    // std::cout << std::endl;

    //? DO-WHILE LOOPS 
    //* The thing with do-while loops is the do's body runs before the test ;
    //* The test is the while part
    //const unsigned int COUNT {10}; //* initialization
    // size_t i {0}; //* or unsigned int i {0}; //* initialization
    //COUNT =10;
    //i = 0;
    //do {
    //    std::cout << i << " :::  I love C++" << std::endl ;
    //    ++i;
    //}while ( i < COUNT); //*  This is the "test" part of the code





    /*
 
    //*                                _    ____  ____      _ __   ______  
    //*                               / \  |  _ \|  _ \    / \\ \ / / ___| 
    //*                              / _ \ | |_) | |_) |  / _ \\ V /\___ \ 
    //*                             / ___ \|  _ <|  _ <  / ___ \| |  ___) |
    //*                            /_/   \_\_| \_\_| \_\/_/   \_\_| |____/ 
                                          
    */




    //? DECLARATION WITH INT TYPE
    // unsigned int scores[10]; //? initialising without data gives junk data...
    //* Current structure might be:
    /*//* scores python kind list :
        //*scores = [XX , XX ,XX , XX , XX ,XX , XX ,XX , XX , XX ]
        //*XX means junk data.. one type of array can only handle one type of data.
    */

    //*?------------------READING MANUALLY------------------
    /*std::cout << "scores [0] : " << scores[0] << std::endl;
    std::cout << "scores [1] : " << scores[1] << std::endl;
    ------------------------------------------------------*/

    //?/*SETTING DATA MANUALLY (Modifying during run time)
    /* scores[0] = 20;
     scores[1] = 21;
     scores[2] = 22;
     scores[3] = 23; */

    //? SETTING DATA WITH FOR-LOOPS :
    /*for (size_t i{0}; i < 10; ++i)
    {
        scores[i] = i *10;
    }*/

    //? READING ARRAY WITH FOR-LOOPS;
    // The basic for-loop with in which we usually iterate with to print data out
    /*for (size_t i{0}; i < 10; ++i)
    {
        std::cout << "scores [" << i << "] :" << scores[i] << std::endl;
    }*/

    // //? DECLARE AND INITIALIZE TOGETHER WITH DOUBLE TYPE
    // double salaries[5] {12.7 ,8.5 , 4.3 ,3.2 , 5.1};

    // READING ARRAY WITH FOR-LOOPS;
    /// The basic for-loop with in which we usually iterate with to print data out
    // for (size_t i{0}; i < 5; ++i)
    // {
    //     std::cout << "scores [" << i << "] :" << salaries[i] << std::endl;
    // }

    //* If not initialized then value of item = 0
    // int salaries[5] {12 , 7 , 5};
    // for (size_t i{0}; i < 5; ++i)
    // {
    //     std::cout << "scores [" << i << "] :" << salaries[i] << std::endl;
    // }




    //? Omit size of array [BIG LESSON]

    
    //*Initializing without size value;
    //int class_sizes [] {12,7,10,15};
    //*but to print the data from an array like this you need to use a range based for-loop;
    //*the below is a range-based for-loop which we have not yet learned:
    //*btw you can not use the curly braces if there is only one line....
    // for (auto value : class_sizes)std::cout << "value : " << value << std::endl;
    

    //* You can create const arrays ; like you guessed it cant be modified
    // const int birds[] {10,50,2,0,52,0,2};

    //*DOING OPERATIONS ON ARRAYS;
    /*
    int birds[]{10, 50, 2, 0, 52, 0, 2};
    int sum;
    for (int bird : birds)
        sum += bird;
    std::cout << sum << std::endl;
    */




 
    //*GETTING SIZE OF ARRAY AT RUN TIME

    ////initialize the bird's array
    //* int birds_array_size {std::size(birds)};
    //* for(size_t i{0}; i < birds_array_size; ++i) std::cout << "birds " << i <<  " : "<<birds[i] << std::endl;
    //! The above code was to just print out all the items in the array. 
    //! But We can do it better with range-based for-loops  
    
    
    //? Omit size of array [BIG LESSON]
    //? -   Using Range Based For-Loops (Arrays)

    // int birds[]{10, 50, 2, 0, 52, 0, 2};
    // //! But with range-based for-loops We can't get indexes
    // for (auto i : birds){
    //     std::cout << "Birds " << i <<  " : "<<birds[i] << std::endl;
    // }



    /*
 
    //*                  _    ____  ____      _ __   ______   
    //*                 / \  |  _ \|  _ \    / \\ \ / / ___|  
    //*                / _ \ | |_) | |_) |  / _ \\ V /\___ \  
    //*               / ___ \|  _ <|  _ <  / ___ \| |  ___) | 
    //*              /_/   \_\_| \_\_| \_\/_/   \_\_| |____/  
    //*                    O F    C H A R A C T E R                                            
 
    */

    //? DECLARATION OF CHARACTER ARRAY
    // char message1[6] {'H' , 'e' , 'l' ,'l','0'};
    //* in char arrays you have to put 1 extra in the size like I have done above;
    //* This is because there should be \0 inserted by the compiler 
    //* ; not defining the array size doesnt work as-well. 
    //* THIS IS THE CASE FOR STD::COUT (ing) Otherwise : Fine;
    
    //?  Printing char array;
    //  We can use the traditional for loop method but ;
    //  In the chase of char type we can just do :
    //  std::cout << (char array here) << std::endl
    //todo try changing the array's size value to 5 (currently array's size) or not specify it and run it.  
    // std::cout << message1 << std::endl ; 

    //? MODIFYING ITEMS OF ARRAY
    // message1[0] = 'd'

    //? SETTING UP C-string(s) 
    //* 1. Method : manually typing terminator '\0'
    // char message1[] {'H' , 'e' , 'l' ,'l','\0'};
    
    //* 2. Method : Setting a +1 array size
    //char message1[6] {'H' , 'e' , 'l' , 'l' , 'o'};

    //? STRING LITERALS
    //* Declaring string literals automatically converts string into array acceptable like the before initialization 
    //* Use double-quotes to declare string-literals (supports spaces)
    // char message1 [] {"Hello World, Wooo"};



        /*
 
        //*                      _    ____  ____      _ __   __
        //*                     / \  |  _ \|  _ \    / \\ \ / /
        //*                    / _ \ | |_) | |_) |  / _ \\ V / 
        //*                   / ___ \|  _ <|  _ <  / ___ \| |  
        //*                  /_/   \_\_| \_\_| \_\/_/   \_\_|  
        //*                            B O U N D S 
     */

    //?ARRAY BOUNDS
    //* Reading beyond bounds : Read Garbage or crashes the program
    //* Compiler allows reading/modifying  beyond bounds but this is really dangerous 
    // int numbers [4] {1,2,3,4};//initializing like normal
    // std::cout << "FETCHING OUT OF BOUNDS" << numbers[10] << std::endl;

    //* MODIFYING BEYOND BOUNDS
    // numbers[100000] = 8456;
    // std::cout << "number[100000] (Never do this)" << numbers[100000] << std::endl;







    /*

        //*                          ____   ___ ___ _   _ _____ _____ ____  ____  
        //*                         |  _ \ / _ \_ _| \ | |_   _| ____|  _ \/ ___| 
        //*                         | |_) | | | | ||  \| | | | |  _| | |_) \___ \ 
        //*                         |  __/| |_| | || |\  | | | | |___|  _ < ___) |
        //*                         |_|    \___/___|_| \_| |_| |_____|_| \_\____/ 
                                                
 
    */
     
    //? Definition
    //* Pointers are variables that store addresses of other variable.
    //* A Pointer of any type can store address of the same type
    //* Pointers are of same size in each type;

    //? Declaration of Pointers;
    //* Declaration of Pointer is done with the following syntax;
    //* It is recommended pointers are initialized with nullptr (equivalent to 0)
    // int* <pointer name> {nullptr};
    //* Don't initalize a pointer and a variable like this:
    // int * p_number{} , other_int_var{} //* Just because of confusion

    //? Initializing with valid data
    /*
    int int_var {43};
    int *p_int{&int_var};

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "Pointer var : " << p_int << std::endl;
    */
    //? Modifying Pointer data 
    /*
    int int_var1 {65};
    p_int = &int_var1;
    std::cout << "Pointer var : " << p_int << std::endl;
    */
    //? DE-REFERENCING A POINTER:
    //* Reading the value of a pointer value is called dereferencing;
    /*
    int* p_int2 {nullptr};
    int int_data {57};
    p_int2 = &int_data;

    std::cout << "Pointer var2 : " << *p_int2 << std::endl;
    */




    /*

        //*                  ____   ___ ___ _   _ _____ _____ ____  ____  
        //*                 |  _ \ / _ \_ _| \ | |_   _| ____|  _ \/ ___| 
        //*                 | |_) | | | | ||  \| | | | |  _| | |_) \___ \ 
        //*                 |  __/| |_| | || |\  | | | | |___|  _ < ___) |
        //*                 |_|    \___/___|_| \_| |_| |_____|_| \_\____/ 
        //*                            C H A R A C T E R S                                

    */


    //* Character Pointers are same as normal pointers 
    //* But there is some extra features for char pointers:
    //const char * message {"Hello World!"};
    //* This prints out the whole message
    //std::cout << "Pointer var2 : " << message << std::endl;
    //* Because it is a constant we can't modify it unless code is like this :
    //char message1[] {"Hello World!"};
    //message1[0] = 'b';
    //std::cout << "Pointer var2 : " << message1 << std::endl;
    



    /*
 
    //*           ______   ___   _    _    __  __ ___ ____   __  __ _____ __  __  ___  ______   __
    //*          |  _ \ \ / / \ | |  / \  |  \/  |_ _/ ___| |  \/  | ____|  \/  |/ _ \|  _ \ \ / /
    //*          | | | \ V /|  \| | / _ \ | |\/| || | |     | |\/| |  _| | |\/| | | | | |_) \ V / 
    //*          | |_| || | | |\  |/ ___ \| |  | || | |___  | |  | | |___| |  | | |_| |  _ < | |  
    //*          |____/ |_| |_| \_/_/   \_\_|  |_|___\____| |_|  |_|_____|_|  |_|\___/|_| \_\|_|  
    //*                                    A L L O C A T I O N        
    //*                                    ( P O I N T E R S )             
 
    */


    //* Our code only has access to virtual memory and not the actual RAM. 
    //* The size of the virtual memory is dependant on whether the system is 32-bit or 64-bit
    //* 2^bit - 1 . This is the virtual memory size
    //* The virtual memory is divided into sections : System , Stack , Heap , Data , Text
    //* We are only talking about Stack and Heap. Stack is the current holder of all our variables.
    //* Stack memory is controlled by scope it kind of means when the {} ends, the variable ends.
    //* Heap memory is additional memory which we have to declare and return to the system.  
    //* And Further we are going to learn how to use Heap

    //? ALLOCATING SPACE FOR HEAP MEMORY
    //* nullptr = null pointer 
    // int *p_number{nullptr};
    // p_number = new int; //* This memory belongs to our program and the system can't use it for anything else 
    //                     //* Unless We return it . After this p_number has same syntax as p_number
    // *p_number = 77; 
    // std::cout << p_number << std::endl;
    // std::cout << *p_number << std::endl;
    // std::cout << &p_number << std::endl;
    // std::cout << sizeof(p_number) << std::endl;

    // delete p_number; //* Releasing the pointer
    // p_number = nullptr;
    
    //* INITIALIZING ON DECLARATION
    // int *p_number = new int {8};
    
    //? DANGLING POINTERS 
    //* DANGLING POINTERS are pointers pointing to invalid address causing errors
    //* Case 1: Not initialized pointers
    //* Case 2: Accessing deleted pointers without initializing
    //* Case 3: Multiple Pointers to same address
    //* These above cases create undefined behaviour 
    //todo Check what all the above cases do

    //? WHEN "NEW" STATEMENT FAILS
    //* Getting it to fail.
    // int* lots_of_int { new int[100000000000000]}; //* We have not yet learned about setting arrays this way.
                                                  //* This allocates a lot of memory thus, making "new" fail and program crash.
    //* Handling "new" statement fails
    //* We can use either try-catch blocks or std::nothrow to handle new statement fail . 
    //* We have not yet studied about try-catch blocks or std::nothrow.
    //* std::nothrow is a statement we can use beside new keyword and it sets the new's variable to nullptr.
    //* Syntax for using std::nothrow : int *variablename { new( std::nothrow ) int[100000000000]};
    
    //* Learning
    //* Exhausting
    // int* data { new int[100000000000000]};

    //* FIXING
    //* Exception Method (try-catch method)
    /*
    try {
        int* data { new int[100000000000000]};
    } catch ( std::exception& ex) {
        std::cout << "Something went wrong : " << ex.what() << std::endl;
    }
    */


    //* std::nothrow Method
    /*
    for (size_t i {0}; i < 100; ++i){
        int* data { new(std::nothrow) int[100000000000000]};
        if (data!= nullptr)std::cout<< "Data allocated" << std::endl; //* USING SHORTHANDS FOR FLOW CONTROL.
        else std::cout<< "Data allocation Failed" << std::endl; //* USING SHORTHANDS FOR FLOW CONTROL.
    }
    std::cout << "Program compiled successfully" << std::endl;
    */

    //? NULL POINTER SAFETY 
    //* It is always a good idea to run an if statement before setting anything to a pointer . Like this.

    /*
    int *p_number {new int {45}};
    //* Compact IF statement
    if (p_number)std::cout << &p_number << " p_number is set to a valid address";
    else std::cout << "p_number is set to a invalid address";
    delete p_number; //* Never Forget to delete a pointer. It is really a bad decision for the memory. Causes memory leaks
    p_number = nullptr ; 
    */


    //* It is okay to delete a null pointer;
    /*
    int *p_number {};
    delete p_number;//This works Fine
    */

    //? MEMORY LEAKS
    //* Memory leaks occur when we lose access to a pointer. Making no one be able to be use it , system nor the code
    
    //* Case 1 : Overwriting
    /*
    int *p_number {new int {54}};
    int number {55};

    p_number = &number; //* Here we lost access to the int 54 thus we are not able to return it nor use it 
    */

    //* Case 2 : Double Allocation
    /*
    int *p_number {new int {54}};
    p_number  =  new int {55}; //* We lost access to the first heap memory.
    */

    //* Case 3 : Allocation inside scopes;
    /*
    {
        int *p_number = new int {54};
    } //* Here we lost access to p_number and we cant delete it.
    */

    //? DYNAMIC ARRAYS
    //* DYNAMIC ARRAYS are the arrays strored on the heap memory.
    //* DECLARATION 
    /*
    size_t size {10};

    //* Garbage Valued Array
    double *p_salaries {new double[size]};
    //* Zero-Valued Array . W/std::nothrow
    int *p_students { new(std::nothrow) int [size]{}};
    //* Valued array with given values and rest to 0.
    double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}};
    
    //* Learning
    if (p_scores){
        std::cout << "size of scores" << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores" << std::endl;

        //* for loop for getting each element in an Heap-stored Array
        //* There is a slight difference between stack-arrays and heap-arrays
        //* When it comes to for loop. We can't use a range-based for-loop in case of heap-arrays;
        for (size_t i {}; i < size ; ++i){
            std::cout << "value: " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        } 
    }

    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;
    
    delete[] p_scores;
    p_scores = nullptr;
    */

    //* Static arrays Vs dynamic arrays
    //* Static arrays 
    /*
    int scores[10] {1,2,3,4,5,6,7,8,9,10};

    std::cout << "scores size : " << std::size(scores) << std::endl;
    for (auto s : scores){
        std::cout << "value : " << s << std::endl;
    }

    //* Dynamic Arrays
    int* p_scores = new int[10] {1,2,3,4,5,6,7,8,9,10};
    */
    //* On dynamic Arrays We can't do : std::size or range-based for-loops



 
    //*                               ____  _____ _____ _____ ____  _____ _   _  ____ _____ ____  
    //*                              |  _ \| ____|  ___| ____|  _ \| ____| \ | |/ ___| ____/ ___| 
    //*                              | |_) |  _| | |_  |  _| | |_) |  _| |  \| | |   |  _| \___ \ 
    //*                              |  _ <| |___|  _| | |___|  _ <| |___| |\  | |___| |___ ___) |
    //*                              |_| \_\_____|_|   |_____|_| \_\_____|_| \_|\____|_____|____/ 


    //? Definition
    //* References are aliases for variables and we can use them just like we use the variable
    //* References must be initialized at declaration 
    //? DECLARATION
    //* Syntax
    /*
    int int_data {45};
    double double_data {55};

    int& ref_int_data {int_data};
    double& ref_double_data {double_data};
    */
    //todo Run the following code to understand references.
    /*
    std::cout << int_data << std::endl;
    std::cout << &int_data << std::endl;
    std::cout << double_data << std::endl;
    std::cout << &double_data << std::endl;
    
    std::cout << std::endl;

    std::cout << ref_int_data << std::endl;
    std::cout << &ref_int_data << std::endl;
    std::cout << ref_double_data << std::endl;
    std::cout << &ref_double_data << std::endl;
    */

    //* Modifying data
    //* When modifying references or orginal data. Both references and orginal data change.
    /*
    int_data = 111;
    double_data = 5216.64;

    ref_int_data = 10576;
    ref_double_data = 152.66;
    */

    //* This modifies both references and orginal because they are in the same memory location

    //? Comparision between Pointers and References
    //* DIFFERENCE 1 : DECLARING
    //* Declaring
    /*
    double double_value {12.34};
    double& ref_double_value {double_value}; // *Reference to double_value
    double* p_double_value {&double_value}; //*Pointer to double_value
	*/
	
    //* WRITING

	//* Writing through pointer
	// *p_double_value = 15.44;

	//* Writing through reference
	// ref_double_value = 18.44;
	
    //* A Reference can only reference one variable. 
    //* When re-assigning a reference we change the refered variable's value to the assigned


    //? Const Reference
    //* Non-const references
    /*
    int age {21};
    int& ref_age {age};

    ref_age++; //* Modify through reference
    */

    //* Const Reference
    /*
    int age {21};
    const int& ref_age {age}; //* This const only applies to the ref_age name and not to the age variable; Thus age (var) can be modified.
    */

    //* Same using pointers . DIFFICULTY : INTERMEDIATE
    /*
    int age {21};
    const int * const p_age {&age}; //* This allows to not let the pointer point to another variable.
    */
    
    
 
    //*         ____ _   _    _    ____      _    ____ _____ _____ ____       _    _   _ ____    ____ _____ ____  ___ _   _  ____  
    //*        / ___| | | |  / \  |  _ \    / \  / ___|_   _| ____|  _ \     / \  | \ | |  _ \  / ___|_   _|  _ \|_ _| \ | |/ ___| 
    //*       | |   | |_| | / _ \ | |_) |  / _ \| |     | | |  _| | |_) |   / _ \ |  \| | | | | \___ \ | | | |_) || ||  \| | |  _  
    //*       | |___|  _  |/ ___ \|  _ <  / ___ \ |___  | | | |___|  _ <   / ___ \| |\  | |_| |  ___) || | |  _ < | || |\  | |_| | 
    //*        \____|_| |_/_/   \_\_| \_\/_/   \_\____| |_| |_____|_| \_\ /_/   \_\_| \_|____/  |____/ |_| |_| \_\___|_| \_|\____| 
    //*                                                        M A N I P U L A T I O N 
    
    //? FUNCTIONS 
    //* Check IF (COMES FROM A LIBRARY CALLED cctype). Here all of these functions are included in iostream
    //* Check if alphanumeric : std::isalnum( <char> )
    //* Check if alphabetic : std::isalpha( <char> )
    //* Check if blank : std::isblank( <char> ) // Mainly useful with for-loop to get every blank character.
    //* Check if lower case: std::islower( <char> )
    //* Check if upper case: std::isupper( <char> )
    //* Check if Digit: std::isdigit( <char> )
    //* MAKE UPPER CASE: std::toupper(<char>)
    //* MAKE lower CASE: std::tolower(<char>)
    /*
    std::cout << std::isalnum('C') << std::endl; //* std::isalnum
    std::cout << std::isalpha('*') << std::endl; //* std::isalpha
    */
    //? USING C-STRINGS (requires cstring library)
    //* get size of a string : std::strlen(<string array>)
    //* Please read documentation for strcmp (compares 2 strings) : https://en.cppreference.com/w/c/string/byte/strcmp
    //* Please read documentation for strchr (finds an alphabet from a string ) : https://en.cppreference.com/w/c/string/byte/strchr


    //? USING C-STRINGS : COPY AND CONCATENATION
    //* CONCAT : https://en.cppreference.com/w/c/string/byte/strcat
    

    //* Concatenation : syntax
    //* Use "std::strncat" to choose how many characters you want to concatenate from the source 
    /*
    char dest[50] = "Hello";
    char src[50] = "World";

    std::strcat(dest,src);
    std::cout << dest << std::endl;
    */
    //* std::strrcpy copies from source to destination
    //* std::strncpy copies from source to destination according to given amount.


    
    
 
    //*    ____ _   _    _    ____      _    ____ _____ _____ ____    __  __    _    _   _ ___ ____  _   _ _        _  _____ ___ ___  _   _ 
    //*   / ___| | | |  / \  |  _ \    / \  / ___|_   _| ____|  _ \  |  \/  |  / \  | \ | |_ _|  _ \| | | | |      / \|_   _|_ _/ _ \| \ | |
    //*  | |   | |_| | / _ \ | |_) |  / _ \| |     | | |  _| | |_) | | |\/| | / _ \ |  \| || || |_) | | | | |     / _ \ | |  | | | | |  \| |
    //*  | |___|  _  |/ ___ \|  _ <  / ___ \ |___  | | | |___|  _ <  | |  | |/ ___ \| |\  || ||  __/| |_| | |___ / ___ \| |  | | |_| | |\  |
    //*   \____|_| |_/_/   \_\_| \_\/_/   \_\____| |_| |_____|_| \_\ |_|  |_/_/   \_\_| \_|___|_|    \___/|_____/_/   \_\_| |___\___/|_| \_|
    //*                                                S T D : : S T R I N G S                                                                                                                               
    
    //* We use std::string (s) so that we don't need to worry about the size of each char array (string);
    //* We need to import the string library like you can see in the imports section ( THE TOP PART ) everything.cpp:1:1

    //? Declaration and Initialization
    /*
    std::string full_name; //* empty string
    std::string planet {"Earth is a green planet"}; //* String with data
    std::string prefered_planet {planet} ; //* String with other string as data     
    std::string message {"Hello There" , 5}; //* Sets only the first 5 (the second argument) characters of the given string (1-st)

    //* We can change std::string to be larger than initalized at runtime;
    */

    //?                   _____ _   _ _   _  ____ _____ ___ ___  _   _ ____  
    //?                  |  ___| | | | \ | |/ ___|_   _|_ _/ _ \| \ | / ___| 
    //?                  | |_  | | | |  \| | |     | |  | | | | |  \| \___ \ 
    //?                  |  _| | |_| | |\  | |___  | |  | | |_| | |\  |___) |
    //?                  |_|    \___/|_| \_|\____| |_| |___\___/|_| \_|____/ 
    
    //? One Definition Rule;
    //* If any content is missing in this file please check main.cpp
    //query We are going to use multiple files from now on so check out everything and check the following repostry
    //? https://github.com/rutura/The-C-20-Masterclass-Source-Code/tree/main                                            
    

    //? From now on please choose the rescpectively named folder (Functions) from the workspace for examples
    //? Change the function name to "main" in the file you choose before running.
    //? Change it back when moving on to the next example .  
    //! You might not be able to run with tasks and might have to use g++ file.cpp. Then run the exe file 

    //? Function hands on 
    //query Functions.Basics.functionbasics.cpp
    //* Functions in C++ must be declared before used.
    //* Function syntax in C++
    /* //! Not to be uncommented 
    return_type function_name (param1, param2 , ...){
        //* Operations 
        return return_type
    }
    */

    //* Calling a function : syntax
    //* resultvar = function_name(parm1, param2)

    //? Function Declaration and Definition
    //query Functions.Basics.definedeclare.cpp
    //* Signature of a function is kind of like a name it includes only the function's name and parameter list
    //* Prototype is the entire declaration
    //* Function can be declared first then used then defined. 
    //* Declaration is sometimes known as prototype. Prototype must end with semicolon 
    //* Prototype syntax : int max(int a ,int b);
    //* Prototype must come before it's being called.

    //? Functions : Spanning MultipleFiles 
    //query Functions.Basics.MultipleFiles.cpp
    //query watch this to understand compilation model : https://youtu.be/8jLOx1hD3_o?si=WCE_fr3h5jdOwyCh&t=54930
    //* .h means header 
    //* Defintions can be inside any translation unit.
    //* That means the definition can be in any file name as long as it is a .cpp file.
    
    //? Functions : Pass by Value
    //query Functions.Basics.PassByValue.cpp
    //* You can pass in default values for parameters.
    //* This was just a tip. Syntax : double add(double a = 10 , double  b = 10) reutrn a +b ; 
    //* This lesson just says how the parameter of a function is just a copy of the actual value.
    //* Thus when we increment , decrement etc.. on it nothing happends to the orginal.

    //? Functions : Pass by pointer
    //query Functions.Basics.PassByPointer.cpp
    //* This lesson is about how you send the orginal variable itself (so that changes happen on it) 
    //* by using pointers (./everything.cpp:390:) 

    //? Functions : Pass by Reference
    //query Functions.Basics.PassByRef.cpp
    //* Same as Pass by Pointer but using references.

    
    //*                      
    //*                        _____ _   _ _   _  ____ _____ ___ ___  _   _ ____  
    //*                       |  ___| | | | \ | |/ ___|_   _|_ _/ _ \| \ | / ___| 
    //*                       | |_  | | | |  \| | |     | |  | | | | |  \| \___ \ 
    //*                       |  _| | |_| | |\  | |___  | |  | | |_| | |\  |___) |
    //*                       |_|    \___/|_| \_|\____| |_| |___\___/|_| \_|____/ 
    //*                                G E T T I N G  T H I N G S  O U T                                            

    //query Functons.Function.return
    //? With Input and Output parameters
    //query Functions.Function.return.InAndOut.cpp
    //* Here we use parameters and set it to get things out of functions
    //* static_cast is used for the convertion of one type to another

    //? Using return statements
    //query Functions.Function.return.Return.cpp
    //* In this lesson we use return keyword to send back a variable. 
    //* Then we can use it wherever we want like this : int result = sum(2 , 3) 



    
    //*                        
    //*                           _____ _   _ _   _  ____ _____ ___ ___  _   _ ____  
    //*                          |  ___| | | | \ | |/ ___|_   _|_ _/ _ \| \ | / ___| 
    //*                          | |_  | | | |  \| | |     | |  | | | | |  \| \___ \ 
    //*                          |  _| | |_| | |\  | |___  | |  | | |_| | |\  |___) |
    //*                          |_|    \___/|_| \_|\____| |_| |___\___/|_| \_|____/ 
    //*                                          O V E R L O A D I N G                        
    
    //query Functions.Function.overloading
    //* Function overloading is a method in which the programmer makes multiple functions with same name but 
    //* different parameters and return types
    //* The use of function overloading. 
    //* We can create a sum function that when given str as parameters : does concatnate
    //* And when given a int does return the sum
    //? Setting Up
    //query Functions.Function.overloading.settingup.cpp
    //* Overloads can be different with return type , parameter order , number of parameters , parameter type 

    


                                    
    //*                           _____ _   _ _   _  ____ ___ _____ ___  _   _ ____  
    //*                          |  ___| | | | \ | |/ ___|_ _|_   _/ _ \| \ | / ___| 
    //*                          | |_  | | | |  \| | |    | |  | || | | |  \| \___ \ 
    //*                          |  _| | |_| | |\  | |___ | |  | || |_| | |\  |___) |
    //*                          |_|    \___/|_| \_|\____|___| |_| \___/|_| \_|____/ 
    //*                                      L A M B D A  F U N C T I O N S

    //query Functions.Function.lambda
    //* Looks difficult but is relatively very simple...
    //* Lambda functions are a mechanism to setup functions without names.
    //* After we set it up, we can give them names and call them or we can get them to do things directly
    
    //? Syntax 
    //query Functions.Function.lambda.lambdas.cpp
    //* Summary : explains the lambda function's syntax

    //? Capture Lists
    //query Functions.Function.lambda.CaptureLists.cpp
    //* Capture Lists are used to give lambda functions access to variables out of the lambda's scope
    //* Capture Lists are not like parameters. It can directly take in outside variables
    //* You can capture by value , reference 
    //* When we capture by value : we get a copy of the orginal value.

    //? Capture list : ALL
    //query Functions.Function.lambda.CaptureAll.cpp
    //* Capture everything in the above scope

    //*                           _____ _   _ _   _  ____ ___ _____ ___  _   _ ____  
    //*                          |  ___| | | | \ | |/ ___|_ _|_   _/ _ \| \ | / ___| 
    //*                          | |_  | | | |  \| | |    | |  | || | | |  \| \___ \ 
    //*                          |  _| | |_| | |\  | |___ | |  | || |_| | |\  |___) |
    //*                          |_|    \___/|_| \_|\____|___| |_| \___/|_| \_|____/ 
    //*                                            T E M P L A T E S


    //query Functions.Function.templates
    //query https://youtu.be/8jLOx1hD3_o?si=sCXivSq9bh0aQQi_&t=63887
    //* Function templates are way of using DRY on function overloads.
    //* Before we needed multiple return type and we need so many functions.
    //* In this lesson we also learn how to use debugger in VScode.

    //? Base
    //query Functions.Function.templates.FunctionTemplates.cpp
    //* Compiler only generates function instances that are used somewhere.
    //* A template function (as we know of right now) can only use 1 datatype as parameters
    //* We will learn workarounds 

    //? Type deduction and explicit arguments
    //query Functions.Function.templates.TypesExplicit.cpp
    //* Here we learn about using multiple types as arguments

    //? Template type Parameters as reference
    //query Functions.Function.templates.ParametersByValue.cpp
    //* You can do overloads with templates BTW
    
    //? Template Specialisation
    //query Functions.Function.templates.TemplateSpecialization.cpp
    //* It is just a way of telling the compiler to not do the default for a specific type.


                                    
    //*                   ____ ___  _   _  ____ _____ ____ _____ ____  
    //*                  / ___/ _ \| \ | |/ ___| ____|  _ \_   _/ ___| 
    //*                 | |  | | | |  \| | |   |  _| | |_) || | \___ \ 
    //*                 | |__| |_| | |\  | |___| |___|  __/ | |  ___) |
    //*                  \____\___/|_| \_|\____|_____|_|    |_| |____/ 
    //*


    //! Available to only versions after C++20
    //query https://youtu.be/8jLOx1hD3_o?si=MfoKtXW8eZRGyCf0&t=68844
    //query Functions.Concepts
    //* Concepts : A mechanism to place constraints on your template type parameters
    //* We can build custom concepts
    //? Setting Up.
    //query Functions.Concepts.Base.cpp
    //* This section talks about the basic syntaxes of concepts
    //* We can also setup function like this 
    //* auto func( auto a , auto b){return (a<b) ? b : b}

    //? Building Concepts 
    //query Functions.Concepts.Build.cpp
    //* In this section we learn how to build concepts.

    //? Zooming in onto requires clause.
    //query Functions.Concepts.Requires.cpp
    //* The requires clause can take in four kind of requirements:
    //* Simple Requiresments
    //* Nested Requirements
    //* Compound Requirements
    //* Type Requirements

    //? Combining Concepts Using Logical Operators
    //query Functions.Concepts.LogicalCombine.cpp
    //* Logical operators used here : "||" (or operator) , "&&" (and operator)

    //? Auto Concepts 
    //query Functions.Concepts.AutoConcepts.cpp




    //?                   ____ _        _    ____ ____  _____ ____  
    //?                  / ___| |      / \  / ___/ ___|| ____/ ___| 
    //?                 | |   | |     / _ \ \___ \___ \|  _| \___ \ 
    //?                 | |___| |___ / ___ \ ___) |__) | |___ ___) |
    //?                  \____|_____/_/   \_\____/____/|_____|____/                                                    
    //?

    //* Classes are used to create our own data types
    //query Classes

    //? Basics
    //query Classes.Basics.Syntax.cpp
    //* Members of a class are private by default 

    //? CONSTRUCTORS
    //query Classes.Basics.Construct.cpp
    //* A special kind of method that is called when an instance of a class is called 
    //* Properties of classes :
        //* No return type.
        //* Same name as the class. (important)
        //* Can have parameters. Can also have an empty parameter list.
        //* Usually used to initialize member variable of a class.

    //? Defaulted-Constructors
    //query Classes.Basics.Defaulted.cpp
    //* Creating our own constructor deletes the default constructor
    //* Thus we won't be able to run with blank parameters 
    //* We learn how to bring back default constructors.

    //? Setters and Getters
    //query Classes.Basics.SettersGetters.cpp
    //* Methods in class to read or modify member variables
    

    
    
    //*                         ____ _        _    ____ ____  _____ ____  
    //*                        / ___| |      / \  / ___/ ___|| ____/ ___| 
    //*                       | |   | |     / _ \ \___ \___ \|  _| \___ \ 
    //*                       | |___| |___ / ___ \ ___) |__) | |___ ___) |
    //*                        \____|_____/_/   \_\____/____/|_____|____/ 
    //*                             U S I N G  M U L T I P L E  F I L E S                                 

    //query Classes.MultipleFiles
    
    //? Syntax
    //query Classes.MultipleFiles.Multiplefiles 
    //* A class can be defined in multiple files
    //* We can use the #include directive to include the header file in the source file
    //* We can also use the #include directive to include the source file in the header file
    //* This is called a forward declaration
    //* This is useful when we want to use a class in multiple files
    
    //? Manage Objects through pointers
    //query Classes.MultipleFiles.PointerManageObjects 
    //* We are using the stack to handle objects and we learn a new operator with the heap (->).

    //? Destructors
    //query Classes.MultipleFiles.Deconstructors.main.cpp
    //* Special methods that are called when an object dies. Mainly used for cleanup in heap (objects) memory.
    //* Used by the compiler

    //? Constructor and Descrutor's call order
    //query Classes.MultipleFiles.Deconstructors.Order.cpp
    //* Talks about the order of constructors and deconstructors

    //? THIS POINTER
    //query Classes.MultipleFiles.Deconstructors.thispointer.cpp (Not actually related to deconstructors)
    //* "this" pointer is a pointer to the current object (kind of like self(classes) in python)
    //* We can create chained calls using "this" pointer

    
 
    //*                ____ _____ ____  _   _  ____ _____  
    //*               / ___|_   _|  _ \| | | |/ ___|_   _| 
    //*               \___ \ | | | |_) | | | | |     | |   
    //*                ___) || | |  _ <| |_| | |___  | |   
    //*               |____/ |_| |_| \_\\___/ \____| |_|   
    //*                         C L A S S E S                            

    //query Classes.Structs.Basics
    //* struct classes are same as classes
    //* Classes's members are private by default
    //* Struct's members are public by default

    //? Syntax
    //query Classes.Structs.Basics.Syntax.cpp
    //* Syntax of struct


    //? Size of Objects
    //query Classes.Structs.Basics.SizeofObjects.cpp
    //* It will actually show the sum  of the sizes for member variables
    //* Functions are not accounted for size of objects

 
    //*                ___ _   _ _   _ _____ ____  ___ _____  _    _   _  ____ _____ 
    //*               |_ _| \ | | | | | ____|  _ \|_ _|_   _|/ \  | \ | |/ ___| ____|
    //*                | ||  \| | |_| |  _| | |_) || |  | | / _ \ |  \| | |   |  _|  
    //*                | || |\  |  _  | |___|  _ < | |  | |/ ___ \| |\  | |___| |___ 
    //*               |___|_| \_|_| |_|_____|_| \_\___| |_/_/   \_\_| \_|\____|_____|
                                                                     
    
    //query Inheritance
    //* Inheritance allows us to build hierarchy in classes

    //? Basics
    //query Inheritance
    //* Code reuse is improved..
    //* Structure
    //* Example :              Vehicle
    //*         Truck   Car    Jeep    Bike

    //? Syntax 
    //query Inheritance.Syntax
    //* Base class and derived classes can't access each other's private members

    //? Protected Members
    //query Inheritance.Protected
    //* So it is a keyword like private: 
    //* But makes it so that the derived class can access the protected members of the base class
    //* But not the outside of the class

    //? Base access Specifier
    //query Inheritance.BaseAccessSpecifier
    //* In the syntax 
    /*
    class Player : public Person
    */
    //* The public keyword is known as the base access specifier
    //* It controls how much base class members are accessible to the derived class.
    //* If we use private :
    //* The base class members are not accessible to the derived class
    //* If we use protected :
    //* The base class members are accessible to the derived class
    //! No matter which specifier we use private members of base class stays private for the derived class
    //* But not to the outside of the class

    //* I think public is good because it just inherits from the base class

    //? Private Base access Specifiers : Selfish
    //* It is said so because any class inheriting from the private inheriting class. 
    //* will get nothing. 
    //* In the course , civil engineer is inheriting from the engineer class but the engineer class is private
    //* So the civil engineer class will not inherit anything from the person class

    //? Resurrecting the private inheritance
    //query Inheritance.Resurect
    //* We use "using" keyword to publicize the privately inherited members (from base class)

    //? Constructors with inheritance
    //query Inheritance.InherConstructors

    //? Custom Constructors for inheritance
    //query Inheritance.CustomConstructors
    //* We learn how to create custom constructors for base classes
    //* My introduction might be wrong     

    //? Copy Constructors
    //query Inheritance.CopyConstructors
    //* We might need to use copy contractor when we have dynamic memory in classes
    //* So when we want to initialize a person with engineer object 
    //* We can use the copy constructor and this is a little hard concept to understand 
    //* So try to understand it with the example

    //? Inheriting base constructors
    //query Inheritance.InheritConstructors
    //* We can use the base constructor by using the syntax "using Person::Person"
    //* I don't know why but it is not recommended to use inherit constructors

    //? Destructors and Inheritance
    //* Destructors are called in reverse order of constructors for least breakage

    //? Reused Symbols in Inheritance hierarchy
    //query Inheritance.ReusedNames
    //* That means parent and child classes can have same names for member variables
    //* What it does is overwrite the parent with the child member name and member functions
    //* We can use the Parent's method using this syntax child.Parent:method()

    
 
    //*               ____   ___  _  __   ____  __  ___  ____  ____  _   _ ___ ____  __  __ 
    //*              |  _ \ / _ \| | \ \ / /  \/  |/ _ \|  _ \|  _ \| | | |_ _/ ___||  \/  |
    //*              | |_) | | | | |  \ V /| |\/| | | | | |_) | |_) | |_| || |\___ \| |\/| |
    //*              |  __/| |_| | |___| | | |  | | |_| |  _ <|  __/|  _  || | ___) | |  | |
    //*              |_|    \___/|_____|_| |_|  |_|\___/|_| \_\_|   |_| |_|___|____/|_|  |_|
    //*                                                                                     
    
    //* Definition : one method behaving differently each time

    //? Static Binding with Inheritance
    //query Polymorphism.StaticBinding
    //* We learn the current inheritance sections of polymorphism

    //? Polymorphism : Dynamic Binding with virtual functions
    //query Polymorphism.DynamicBinding
    //* We learn how to use virtual functions to achieve dynamic binding

    //? Size of Polymorpic objects & Slicing
    //query Polymorphism.Sizeof
    //* Downside of virtual keyword is it increases the size of our objects 
    //* So we need to be careful with virtual functions

    //? Objects In collections
    //query Polymorphism.ObjectInCollections
    //* We learn how to put objects in arrays

    //? Overrides
    //query Polymorphism.Overrides
    //* Using Overriding we can make it so that we don't make typos whilst making virtual functions
    //* It is a guard so we don't try to make virtual functions with non existent names

    //? Overloading , Overriding and Hiding
    //query Polymorphism.Overrides
    //* Both concepts are pretty familiar to us and we just using examples in this chapter

    //? Inheritance and Polymorphism at Different Levels
    //query Polymorphism.DifferentLevels
    //* Different levels of polymorphism

    //? Final Keyword
    //query Polymorphism.Final
    //* We learn how to use the final keyword to prevent inheritance and overriding
    //* If we mark a method final no downstream methods or classes can override it 

    //? Virtual Functions with Default Arguments 
    //* When we make a base class and derived class with virtual functions with default arguments
    //* Both having an add function with default parameters. (They both have the virtual keyword )
    //* When we call the derived class add function with no arguments it will call the derived class's add function (body)
    //* With the base classes's default arguments
    //* What I wrote here is a little bit confusing. Try to visualize this.
    //todo Try to make classes with the above stated definitions. This will make you revise everything from classes.
    
    //? Virtual Destructors
    //query Polymorphism.V.Destructors
    //* Destructors are called in reverse order. You might have guessed
    //* We talk about a situation where the Syntax is the following :
    // Animal *animal1 = new Dog("Blue Fur" , "Descrbed");
    // delete animal1;
    
    //* In this situation because we are not using virtual destructors only the animal pointer 
    //* This will cause Memory leaks. Because the animal pointer is pointing to the Dog object
    //* And the Dog object is not deleted.
    //* So we need to use virtual destructors 
    //* To solve this we just mark the desturctors as virtual.
    // virtual ~Dog();

    //? DYNAMIC CASTS
    //query Polymorphism.DynamicCasts
    //* Dynamic casts are used to cast a pointer to a derived class to a pointer to a base class

    //? Never run virtual function from constructors / destructors
    //* It is going to lead to some problem at runtime..
    //todo try to see what happens if you do this

    //? Pure virtual functions
    //query Polymorphism.PureClasses
    //* These are functions in classes that are not defined and are supposed to be defined by the derived classes
    //* They are defined with the keyword "= 0";
    //* This will also users to not make an object of base class 
    //* When we put one pure function in a class that makes the class an abstract class
    //* And we can't make objects with abstract classes
    //* Derived classes from abstract classes must override all pure functions else it (derived class) will also become abstract

    //? Abstract Classes as interfaces
    //query Polymorphism.Abstract.Interfaces
    //* We can use abstract classes as interfaces
    //* An abstract with only pure virtual functions and no member variables is called an interface
    
    return 0;
}
