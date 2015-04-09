#include <iostream>
#include <sstream>
#include "sudoku.h"

using namespace std;
Sudoku::Sudoku() {
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			board[row][col] = 0;
		}
	}

	std::set<int> numbers;
	for (int number = 0; number < 10; number++) {
		numbers.insert(number);
	}
	for (int i = 0; i < 9; i++) {
		numAvailableInRow[i] = numbers;
		numAvailableInCol[i] = numbers;
		numAvailableInBox[i] = numbers;
	}
}

// Trenger ingen destruktør.

// e)
int Sudoku::getBoxForCoord(int row, int col) {
	return (row / 3) * 3 + (col / 3);
}

// f)
void Sudoku::placeNumber(int row, int col, int value) {
// k)
	Move move;
	move.row = row;
	move.col = col;
	move.oldValue = board[row][col];
	move.newValue = value;

	moves.push_back(move);

	if (value == 0) {
		// Gjoer ingenting
	} else if (board[row][col] != 0) {
		throw NumberAlreadyInPositionException(move);
	} else if (numAvailableInRow[row].find(value) == numAvailableInRow[row].end()) {
		throw IllegalSudokuMoveException(move, ALREADY_IN_ROW);
	}  else if (numAvailableInCol[col].find(value) == numAvailableInCol[col].end()) {
		throw IllegalSudokuMoveException(move, ALREADY_IN_COL);
	} else if (numAvailableInBox[getBoxForCoord(row, col)].find(value) == numAvailableInBox[getBoxForCoord(row, col)].end()) {
		throw IllegalSudokuMoveException(move, ALREADY_IN_BOX);
	}

	numAvailableInRow[row].erase(value);
	numAvailableInCol[col].erase(value);
	numAvailableInBox[getBoxForCoord(row, col)].erase(value);
	board[row][col] = value;
}

// h)
set<int> Sudoku::getIntersection(const set<int> &setA, const set<int> &setB, const set<int> &setC) {
	set<int> intersection = setA;
	set<int>::iterator it;
	// Iterer over setA og ikke kopien, slik at vi unngaar
	// aa slette fra setet vi itererer over mens vi itererer,
	// ellers maa vi passe paa aa nullstille iteratoren ved sletting.
	for (it = setA.begin(); it != setA.end(); ++it) {
		int value = *it;
		if (setB.find(value) != setB.end() && setC.find(value) != setC.end()) {
			// Do nothing
		} else {
			intersection.erase(value);
		}
	}
	return intersection;
}

// i)
bool Sudoku::canBePlacedAt(int row, int col, int value) {
	if (board[row][col] != 0) {
		return false;
	}
	set<int> possible = getIntersection(numAvailableInRow[row], numAvailableInCol[col], numAvailableInBox[getBoxForCoord(row, col)]);

	if (possible.find(value) != possible.end()) {
		return true;
	}
	return false;
}

// j)
int Sudoku::getUserInput() {
	bool runLoop = true;
	int solved = 0;
	while (runLoop) {
		cout << "Current board: " << endl;
		cout << *this << endl;
		cout << "Choose: P - Place number, U - Undo move, E - End for now" << endl;
		char selection;
		cin >> selection;
		selection = tolower(selection);

		if (selection == 'p') {
			cout << "Give coordinates and value: ";
			int row;
			int col;
			int value;
			cin >> row >> col >> value;
			try {
				placeNumber(row, col, value);
				solved++;
			} catch (std::exception &e) {
				cout << "Exception: " << e.what();
			}
		} else if (selection == 'u') {
			Move m = moves.back();
			moves.pop_back();
			placeNumber(m.row, m.col, m.oldValue);
			if (m.newValue != 0) {
				numAvailableInRow[m.row].insert(m.newValue);
				numAvailableInCol[m.col].insert(m.newValue);
				numAvailableInBox[getBoxForCoord(m.row, m.col)].insert(m.newValue);
			}
			moves.pop_back(); // Remove the undo-entry just created.
		} else if (selection == 'e') {
			runLoop = false;
		}
	}
	return solved;
}


// m)
int Sudoku::checkOnlyAvailable() {
	int solved = 0;
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			if (board[row][col] != 0) {
				continue;
			}
			set<int> possible = getIntersection(numAvailableInRow[row], numAvailableInCol[col], numAvailableInBox[getBoxForCoord(row, col)]);

			if (possible.size() == 1) {
				int value = *(possible.begin());
				placeNumber(row, col, value);
				solved++;
			}
		}
	}
	return solved;
}


// n)

void Sudoku::solve() {
	int count = 1;
	while (count > 0) {
		count = 0;
		count += checkOnlyAvailable();
		count += checkOnlyPossiblePlace();
		if (count == 0) {
			count += getUserInput();
		}
	}
}

ostream &operator<<(ostream &stream, const Sudoku &sudoku) {
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			stream << sudoku.board[row][col];
			if (col != 8) {
				stream << " ";
			}
		}
		stream << endl;
	}
	return stream;
}

void Sudoku::loadFromFile(string filename) {
	ifstream file(filename);
	if (!file) {
		throw std::runtime_error("Couldn't open file");
	}

	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			int value = 0;
			file >> value;
			placeNumber(row, col, value);
		}
	}
	file.close();
}

int Sudoku::numPossibleInRow(int row, int value) {
	int count = 0;
	for (int i = 0; i < 9; i++) {
		if (canBePlacedAt(row, i, value)) {
			count++;
		}
	}
	return count;
}

int Sudoku::numPossibleInCol(int col, int value) {
	int count = 0;
	for (int i = 0; i < 9; i++) {
		if (canBePlacedAt(i, col, value)) {
			count++;
		}
	}
	return count;
}

int Sudoku::numPossibleInBox(int box, int value) {
	int count = 0;
	int boxRow = (box / 3) * 3;
	int boxCol = (box % 3) * 3;
	for (int row = boxRow; row < boxRow + 3; row++) {
		for (int col = boxCol; col < boxCol + 3; col++) {
			if (canBePlacedAt(row, col, value)) {
				count++;
			}
		}
	}
	return count;
}

int Sudoku::checkOnlyPossiblePlace() {
	int solved = 0;
	for (int row = 0; row < 9; row++) {
		for (int col = 0; col < 9; col++) {
			if (board[row][col] == 0) {
				for (int number = 0; number < 10; number++) {
					if (canBePlacedAt(row, col, number)) {
						if (numPossibleInRow(row, number) == 1 || numPossibleInCol(col, number) == 1 || numPossibleInBox(getBoxForCoord(row, col), number) == 1) {
							placeNumber(row, col, number);
							solved++;
						}
					}
				}
			}
		}
	}
	return solved;
}

void Sudoku::writeToFile(string filename) {
	ofstream file(filename);
	if (!file) {
		cout << "Failed to open file " << filename << endl;
		return;
	}

	file << *this;
	file.close();
}

// Exception-support:
IllegalSudokuMoveException::IllegalSudokuMoveException(Move move, ErrorType error) : std::exception(), move(move) {
	std::stringstream ss;
	switch (error) {
	case ALREADY_IN_ROW:
		ss << "Row already contains number " << endl;
		break;
	case ALREADY_IN_COL:
		ss << "Column already contains number " << endl;
		break;
	case ALREADY_IN_BOX:
		ss << "Box already contains number " << endl;
		break;
	}
	ss << "Row: " << move.row
	   << " Col: " << move.col
	   << " Number: " << move.newValue;
	errorString = ss.str();
}

const char *IllegalSudokuMoveException::what() const throw() {
	return errorString.c_str();
}

NumberAlreadyInPositionException::NumberAlreadyInPositionException(Move move) : std::exception(), move(move) {
	std::stringstream ss;
	ss  << "Cell is not empty: "
		<< "Row: " << move.row
		<< " Col: " << move.col
		<< " Current Value: " << move.oldValue
		<< " Attempted to insert: " << move.newValue;
	errorString = ss.str();
}

const char *NumberAlreadyInPositionException::what() const throw() {
	return errorString.c_str();
}

int main() {
	Sudoku s;
	try {
		s.loadFromFile("board.txt");
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
