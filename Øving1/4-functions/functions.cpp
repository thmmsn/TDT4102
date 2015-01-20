#include <iostream>
#include <cmath>
using namespace std;

double discriminant(double a, double b, double c){
	double disc = pow(b,2) - 4*a*c;
	return disc;
}

double printRealRoots(double a, double b, double c){
	double  x, y, d, f, rot;
	rot = discriminant(a,b,c);
	d = sqrt(rot);
	f = 2 * a;

	if(rot > 0){
		x = (-b + d) / f;
		y = (-b - d) / f;
		cout << "x1 = " << x << ", x2 = " << y << " for " << a << "x^2 + " << b << "x + " << c << " = 0" << 
endl;
	}
	if(rot == 0){
		x = (-b + d) / f;
		cout << "x1 = " << x << " for "  << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
	}
	if(rot < 0){
		cout << "Ingen løsning" << endl;
	}
	return 0;

}


int main(){
	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	printRealRoots(a,b,c);
}
