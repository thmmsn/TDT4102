#include <iostream>

int inputInteger(){
    int tall;
    std::cout << "Skriv inn et tall" << std::endl;
    std::cin >> tall;
    return tall;
}


int main(){
    int number = inputInteger();
    std::cout << "Du skrev " << number << std::endl;
}
