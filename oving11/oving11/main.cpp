#include <iostream>
#include "safearray.h"
#include "fancysafearray.h"
#include "sudoku.h"

using namespace std;

/*int main() {
	SafeArray<int> A(10);
	for (int i = 0; i < A.size(); i++) {
		A[i] = i;
	}
	// Se kan endres:
	for (int i = 0; i < A.size(); i++) {
		A[i] = A[i] * 2;
	}
	// Skrive ut resultatet:
	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
	cout << endl;

	SafeArray<int> B(10);
	for (int i = 0; i < B.size(); i++) {
		B[i] = i;
	}

	for (int i = 0; i < B.size(); i++) {
		B[i] = B[i] * B[i];
	}

	cout << "B = (";
	for (int i = 0; i < B.size(); i++) {
		cout << B[i];

		// Ikke skriv ut komma etter siste element
		if (i != B.size() - 1) {
			cout << ",";
		}
	}
	cout << ")" << endl;

	SafeArray<int> C = B;
	B.resize(B.size() / 2);

	for (int i = 0; i < B.size(); i++) {
		B[i] = B[i] + 5;
	}

	B.resize(10);

	cout << "B = (";
	for (int i = 0; i < B.size(); i++) {
		cout << B[i];

		// Ikke skriv ut komma etter siste element
		if (i != B.size() - 1) {
			cout << ",";
		}
	}
	cout << ")" << endl;

	cout << "C = (";
	for (int i = 0; i < C.size(); i++) {
		cout << C[i];

		// Ikke skriv ut komma etter siste element
		if (i != C.size() - 1) {
			cout << ",";
		}
	}
	cout << ")" << endl;

	FancySafeArray<int> D(10);
	FancySafeArray<int> E(9);

	for (int i = 0; i < D.size(); i++) {
		D[i] = i;
	}
	for (int i = 0; i < E.size(); i++) {
		E[i] = E.size() - i;
	}
	FancySafeArray<int> F = D + E;
	cout << "D: " << D << endl;
	cout << "E: " << E << endl;
	cout << "D + E: " << F << endl;

	try {
		E.resize(-1);
	} catch (std::out_of_range &e) {
		cout << "Exception: " << e.what() << endl;
	}
	try {
		E[E.size()];
	} catch (std::out_of_range &e) {
		cout << "Exception: " << e.what() << endl;
	}
}
 */

int main() {
    Sudoku s;
    try {
        s.loadFromFile("b.txt");
        
    } catch (IllegalSudokuMoveException &e) {
        cout << "Invalid sudoku board: " << e.what() << endl;
        return 0;
        
    } catch (std::exception &e) {
        cout << e.what() << endl;
        return 0;
    }
    s.solve();
    s.writeToFile("output.txt");
}
