//
//  Matrix2x2.h
//  Oving5
//
//  Created by fredrik on 13/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __Oving5__Matrix2x2__
#define __Oving5__Matrix2x2__
#include <iostream>
#include <stdio.h>
#include "Vector2.h"

class Matrix2x2{
private:
    double mat[2][2];

public:
    Matrix2x2();
    Matrix2x2(double a, double b, double c, double d);
    double get(int row, int column);
    void set(int row, int column, int value);
    void print();
    Matrix2x2 inverse() const;
    double det() const;
    
    
    Matrix2x2 operator+( const Matrix2x2& rhs);
    Matrix2x2 operator-( const Matrix2x2& rhs);
    Matrix2x2 operator*( const Matrix2x2& rhs);
    Matrix2x2 operator*( const double rhs);
    Matrix2x2& operator*=( const Matrix2x2& rhs);
    Matrix2x2& operator+=( const Matrix2x2& rhs);
    Matrix2x2& operator-=( const Matrix2x2& rhs);
    Vector2 operator*(const Vector2& rhs);
    Vector2 Matrix2x2::operator\(const Vector2& rhs)
    // OPPGAVE 2A, funksjonen er dum
    friend std::ostream &operator<<(std::ostream &out, const Matrix2x2 &matrix);
};



#endif /* defined(__Oving5__Matrix2x2__) */
