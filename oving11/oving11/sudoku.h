#pragma once

#include <set>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

struct Move {
	int row;
	int col;
	int oldValue;
	int newValue;
};

class Sudoku {
	int board[9][9];
	std::set<int> numAvailableInRow[9];
	std::set<int> numAvailableInCol[9];
	std::set<int> numAvailableInBox[9];
	std::vector<Move> moves;
public:
	Sudoku();
	void loadFromFile(std::string filename);
	void writeToFile(std::string filename);
	int getBoxForCoord(int row, int col);
	void placeNumber(int row, int col, int value);
	bool canBePlacedAt(int row, int col, int value);
	int getUserInput();

	int checkOnlyAvailable();
	int checkOnlyPossiblePlace();

	int numPossibleInRow(int row, int value);
	int numPossibleInCol(int col, int value);
	int numPossibleInBox(int box, int value);

	void solve();

	static std::set<int> getIntersection(const std::set<int> &setA, const std::set<int> &setB, const std::set<int> &setC);

	friend std::ostream &operator<<(std::ostream &stream, const Sudoku &sudoku);
};

enum ErrorType {
	ALREADY_IN_ROW,
	ALREADY_IN_COL,
	ALREADY_IN_BOX
};


class IllegalSudokuMoveException : public std::exception {
private:
	Move move;
	std::string errorString;
public:
	IllegalSudokuMoveException(Move move, ErrorType error);
	virtual ~IllegalSudokuMoveException() throw() {}
	const char *what() const throw();
};

class NumberAlreadyInPositionException : public std::exception {
private:
	Move move;
	std::string errorString;
public:
	NumberAlreadyInPositionException(Move move);
	virtual ~NumberAlreadyInPositionException() throw() {}
	const char *what() const throw();
};


