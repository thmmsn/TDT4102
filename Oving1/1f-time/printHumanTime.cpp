
// løsningen fungerer smertefritt for sekunder <3601

#include <iostream>
#include <cmath>
using namespace std;

int inputSeconds(){
	int inpSeconds;
	cout << "Antall sekunder" << endl;
	cin >> inpSeconds;
	return inpSeconds;
}


int findMinutes(int minutter){
	float tempMin = floor(minutter/60);
	if( tempMin >
	return tempMin;
}

int findHours(int timer){
	float tempTimer = floor(timer/60);
	return tempTimer;
}



int main(){
	int sekunder = inputSeconds();
	int min = findMinutes(sekunder);
	int timer = findHours(min);
	int restSekund = sekunder - min * 60;

	cout << timer << " timer, " << min << " minutter og " << restSekund << " sekunder." << endl;
}

