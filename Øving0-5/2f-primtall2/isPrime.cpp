#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n;
	int primeness = true;

	cout << "Primtallsjekker'n: ";
	cin >> n;

	for( int i = 2; i<=n-1; i++){

		if( n % i == 0 ){
		primeness = false;
		cout << "False";
		}

	}

	return 0;
}
