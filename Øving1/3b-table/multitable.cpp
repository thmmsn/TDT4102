#include <iostream>
using namespace std;

int inputValues(){
	int value;
	cout << "skriv inn" << endl;
	cin >> value;
	return value;
}


int multiplyTable(int x, int y){
	for(int i=1; i<=x; i++){
		cout << i << " |";
		for(int j=1; j<=y; j++){
			cout << i*j << '\t';
		}
		cout << endl;
	}
	return 0;
}


int main(){
	int h = inputValues();
	int b = inputValues();
	cout << "En multiplikasjonstabell (X * Y)" << h << "*" << b << endl;
	multiplyTable(h,b);

}
