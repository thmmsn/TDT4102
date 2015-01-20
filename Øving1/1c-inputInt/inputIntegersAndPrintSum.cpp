#include <iostream>

int inputIntegersAndPrintSum(){
    int a;
    int b;
    std::cout<<"Skriv inn to tall: "<< std::endl;
    std::cin >> a;
    std::cin >> b;
    return a+b;
}



int main(){
    int out = inputIntegersAndPrintSum(); //summerer to tall
    std::cout << "Summen er " << out << std::endl;
}
