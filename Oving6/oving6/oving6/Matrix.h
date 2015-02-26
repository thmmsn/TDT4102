//
//  Matrix.h
//  oving6
//
//  Created by fredrik on 26/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __oving6__Matrix__
#define __oving6__Matrix__

#include <stdio.h>

class Matrix{
private:
    double **mat;
    int nRows, nColumns;
public:
    Matrix();
    Matrix(unsigned int nRows, unsigned int nColumns);
    explicit Matrix(unsigned int i);
    double get(unsigned int i, unsigned int j) const;
    void set(unsigned int i, unsigned int j, double value);
    bool isValid() const;

    int getNumRows() const;
    int getNumColumns() const;
    void randomGenerator();

    Matrix &operator=(Matrix rhs);
    Matrix &operator+=(Matrix &rhs);
    Matrix &operator+(Matrix &rhs);
    friend std::ostream &operator<<(std::ostream &out, const Matrix &matrix);
};

#endif /* defined(__oving6__Matrix__) */
