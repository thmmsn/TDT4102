#include <iostream>
#include <cmath>

using namespace std;

int calculateLoanPayments(double totLan, double rente){
        double innbetaling, gjLan;
	int year = 1;
	cout << "Year" << '\t' << "Innbetaling" << '\t' << "Gjenstaende lan" << endl;
	gjLan = totLan;

        while(totLan >= 0){
        	innbetaling  = totLan + rente / 100 * gjLan;

		cout << year << '\t' << innbetaling << '\t'<<'\t' << gjLan << endl;

		year = year + 1;


	}
	return 0;
}

int inputLoanValues(){
        double totLan, rente, innbetaling;
        cout << "Totalt loan " << endl;
        cin >> totLan;
//      cout << "Antall avdrag " << endl;
//      cin >> antAvdrag;                       regner med ett avdrag i året
        cout << "Rente " << endl;
        cin >> rente;
//      cout << "Gjenstaende lan" << endl;
//      cin >> gjLan;

        innbetaling  = calculateLoanPayments(totLan, rente);
        return innbetaling;
}


int main(){
double k = inputLoanValues();
	cout << k << endl;
}
