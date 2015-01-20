#include <iostream>

int inputIntegersAndPrintSum(){
    int a=true;
    int b;
	int tempSum = 0;
    std::cout<<"Skriv inn tall (avbryt med 0): "<< std::endl;
	while(a != 0){  // det egner seg med while-løkke fordi den avbrytes nå det skrives inn 0.
    	std::cin >> a;
	tempSum = tempSum + a;
	}
	return tempSum;
}



int main(){
    int out = inputIntegersAndPrintSum(); //summerer to tall
    std::cout << "Summen er " << out << std::endl;
}
