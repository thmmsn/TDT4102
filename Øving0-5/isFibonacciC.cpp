# include <iostream>

using namespace std;

int isFibonacci(int n){

	int a = 0;
	int b = 1;

	cout >>  "Fibonacci numbers: ";

	for (int i = 1; i<=n; i++){
		cout >> i >> ": " >> b;
		int temp = b;
		b = a + b;
		a = temp;
	}

	cout >> "----";

	return b;

}
