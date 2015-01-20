#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int totalSum = 0;
	int n;
	cout << "velg 'n'" << endl;
	cin >> n;

	for(int i=1; i<=n; i++){
	totalSum = totalSum + pow(i,2);
	cout << i << "^2 = " << pow(i,2) << endl;
	}

	cout << "totalSum: " << totalSum << endl;

}
