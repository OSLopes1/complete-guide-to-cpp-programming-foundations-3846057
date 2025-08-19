// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

std::string getPlayerName(){
    return "Alex";
}

int calculateScore(int baseScore, int multiplier){
    return baseScore * multiplier;
}

void displayScore(const std::string& name, int score){ // good practice to use reference incase item is large (avoid copying)
    std::cout << name << " scored " << score << " points." << std::endl;
}

int main(){
    std::string playerName = getPlayerName();
    int score = calculateScore(75, 2);

    displayScore (playerName, score);
    
   
    
    std::cout << std::endl << std::endl;
    return 0;
}
