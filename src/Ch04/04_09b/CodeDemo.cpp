// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>

int main(){
    const size_t LENGTH = 50;
    char racer1[] = "Speedy";
    char racer2[LENGTH];
    char raceResult[LENGTH * 2];
    
    strncpy(racer2, "Lightning", sizeof(racer2) - 1);
    racer2[sizeof(racer2)-1] = '\0'; // nullc character is good practice character constants have single quotes

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    strncpy(raceResult, "And the winner is ", sizeof(raceResult) - 1);
    raceResult[sizeof(raceResult)-1] ='\0';

    strncat(raceResult, racer1, sizeof(raceResult)-strlen(raceResult)-1);//strlen is the actual characters currently used in raceResult

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
