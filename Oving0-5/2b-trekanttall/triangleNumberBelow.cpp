#include <iostream>
using namespace std;

int main(){

	int acc = 1;
	int num = 2;
	int n;
	cout << "Velg 'n'" << endl;
	cin >> n;
	cout << "Triangle numbers below " << n << endl;

	while( acc + num < n ){
	acc = acc + num;
	num = num + 1;
	cout << acc << endl;
	}

	return acc;
}
