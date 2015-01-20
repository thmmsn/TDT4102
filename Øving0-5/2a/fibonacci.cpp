# include <iostream>
using namespace std;


int main(){

	int a = 0;
	int b = 1;
	int n = 1;

	while (n!=0){

	cout << "Fibonacci numbers:" << endl;
	cout << "Velg en 'n'" << endl;
	cin >> n;

	for (int i=1; i<=n; i++){
	cout << i << ": " << b << endl;
	int temp = b;
	b = a + b;
	a = temp;
	}

	cout << "----" << endl;

	cout << b;


	}
}
