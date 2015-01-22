#include <iostream>
using namespace std;

double inputDouble(){
	double tall;
	cout << "Skriv inn et tall" << endl;
	cin >> tall;
	return tall;
}

int main(){
	double tall;
	tall = inputDouble();
	cout << "Du skrev: " << tall << endl;
}
