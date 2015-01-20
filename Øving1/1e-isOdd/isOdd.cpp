#include <iostream>
#include <cmath>
using namespace std;

/* int inputInteger() {
	int tall;
	cout << "Skriv inn heltall" << endl;
	cin > tall;
	return tall;
}*/

int isOdd(int i){
	int truthValue;
	if( i % 2){
		truthValue = false;
	}
	else{
	truthValue = true;
	}

	return truthValue;
}

int main(){

	for (int i = 10; i < 15; i++){
		if( isOdd(i)){
		cout << i << " er partall" << endl;
		}
		else{
		cout << i << " er oddetall" << endl;
		}
}

}
