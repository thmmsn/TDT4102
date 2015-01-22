#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	int greatestDivisor;
	cout << "Velg 'n': ";
	cin >> n;

	for (int divisor = n-1; n>=0; divisor +=-1){
		if (n % divisor == 0){
		greatestDivisor = divisor;
		}
	}
		cout << greatestDivisor;

}


//Floating point exception

