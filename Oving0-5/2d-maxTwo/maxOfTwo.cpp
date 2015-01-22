#include <iostream>

using namespace std;

int main(){

int a;
int b;

	cout << "Velg tall A: ";
	cin >> a;
	cout << "Velg tall B: ";
	cin >> b;

	if (a>b){
	cout << "A is greater than B" << endl;
	int largest = a;
	}
	else{
	cout << "B is greater than A" << endl;
	int largest = b;
	}

	return 0;

}
