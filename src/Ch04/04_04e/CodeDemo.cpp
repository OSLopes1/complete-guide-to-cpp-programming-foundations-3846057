// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono> // time tracking

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint *start, *end;
    Duration *elapsed_seconds = new Duration();
    std::string input;

    // :: static member function
    start = new TimePoint(Clock::now()); // pointer so we need to assign objects to them

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());
    *elapsed_seconds = *end - *start; // subtract the objects these pointers are pointing to

    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl; // pointer does not have member functions - dereference (*ptr) does not work here - can also use (*elapsed_second).count() but arrow is better

    // delete objects when done with them - free up memory (can I do this in python)
    delete start;
    delete end;
    delete elapsed_seconds;

    std::cout << std::endl << std::endl;
    return 0;
}
