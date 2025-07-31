// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

// global variables
int a, b = 5; // can create multiple variables in one line

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;

    my_flag=true;
    

    std::cout << std::endl << std::endl;
    return 0;
}
