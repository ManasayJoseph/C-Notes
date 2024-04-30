// #include <iostream> //! Ctrl + A then Ctrl + K + U



// int main(){
//     /*
//     Lambda function signature : 
//                                 [capture list] (parameters) ->return type{
//                                         //* Function body
//                                 }
//     */
//     //* Syntax : Storing in variable (Not calling)
//     auto func = [](){
//         std::cout << "HELlo" << std::endl;
//     };
//     //* Calling 
//     func();
//     //* Syntax : lambda without storing
//     //* Declaring and calling. (There is only one chance to call this lambda function)
//     [](){
//         std::cout << std::endl;
//         std::cout << "Hello World!" << std::endl;
//         std::cout << std::endl;
//     }(); //* This ending paranthesis runs this lambda code

//     //* Lambda with parameters (Not stored in variables)
//     [](double a , double b){
//         std::cout << (a+b) << std::endl;
//         std::cout << std::endl;
//     }(10.0,5.0);

//     auto lambdahandle = [](double a , double b){
//         std::cout << (a+b) << std::endl;
//         std::cout << std::endl;
//     };
//     lambdahandle(10,21);
//     lambdahandle(10,24154);

//     //* Lambda function that returns
//     //* We need to have a handle otherwise how will you handle returns
//     //* By the way we can run it in the handle itself and the handle consists of the returned value
//     //* You can run the handle seprately and set it to different variables or cout
//     auto lambdahandle1 = [](double a , double b){
//         return a + b;
//     }(10,34);
//     std::cout << lambdahandle1 << std::endl;
//     std::cout << std::endl;

//     //* Lambda function inside a std::cout 
//     std::cout << [](double a , double b){
//         return a + b;
//     }(10,50) << std::endl;
    
//     //* Explicitly defining return type 
//     std::cout << [](double a , double b) -> int {
//         return a + b;
//     }(10,59) << std::endl;
    


    
//     std::cout << sizeof(lambdahandle);
//     return 0;
// }