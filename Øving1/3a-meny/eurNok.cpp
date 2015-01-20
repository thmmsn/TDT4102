#include <iostream>
using namespace std;


double inputDouble(){
	double tall;
	cout << "Skriv inn verdi i NOK" << endl;
	cin >> tall;
	return tall;
}

double nokEur(double nok){
	double eur;
	eur = nok / 9.12;
	return eur;
}

int main(){
	double nok;
	double eur;
	nok = inputDouble(); // bør bruke double, da det kan forekomme desimaltall
	eur = nokEur(nok);
	cout << nok << " Kr er " << eur << " Euro." << endl;
}
