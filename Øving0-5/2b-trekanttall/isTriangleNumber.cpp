#include <iostream>
using namespace std;

int main(){

	int acc = 1;
	int truthValue;
	int number;

	cout << "Er 'n' trekanttall?" << endl;
	cin >> number;

	while( number > 0 ){

		number = number - acc;
		acc = acc + 1;
	}

	if(number == 0){
	truthValue = true;
	return truthValue;
	}
	else{
	truthValue = false;
	return truthValue;
	}
// Hvordan får jeg den til å returnere truthvalue 0/1
	cout << truthValue;

}
