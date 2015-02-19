//
//  Matrix2x2.cpp
//  Oving5
//
//  Created by fredrik on 13/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Matrix2x2.h"
#include "Vector2.h"

using namespace std;

// OVERLASTING AV OPERATORER

std::ostream &operator<<(std::ostream &out, const Matrix2x2 &matrix){
    
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++){
            
            out << matrix.mat[i][j] << "\t";
            
        }
        out << "\n";
    }
    return out;
}
Matrix2x2 Matrix2x2::operator+( const Matrix2x2& rhs){
    Matrix2x2 result = Matrix2x2(0, 0, 0, 0);
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++){
            result.mat[i][j] = this->mat[i][j] + rhs.mat[i][j];
        }
    }
    return result;
}
Matrix2x2 Matrix2x2::operator-( const Matrix2x2& rhs){
    Matrix2x2 result = Matrix2x2(0, 0, 0, 0);
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++){
            result.mat[i][j] = this->mat[i][j] - rhs.mat[i][j];
        }
    }
    return result;
}
Matrix2x2 Matrix2x2::operator*( const Matrix2x2& rhs){
    Matrix2x2 result = Matrix2x2(0, 0, 0, 0);
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++){
            for (int k = 0; k<2; k++){
                result.mat[i][j] += this->mat[i][k] * rhs.mat[k][j];
            }
        }
    }
    return result;
}
Matrix2x2& Matrix2x2::operator*=( const Matrix2x2& rhs){
    return *this = *this * rhs;
}
Matrix2x2& Matrix2x2::operator+=( const Matrix2x2& rhs){
    return *this = *this + rhs;
}
Matrix2x2& Matrix2x2::operator-=( const Matrix2x2& rhs){
    return *this = *this - rhs;
}

// MEDLEMSFUNKSJONER

Matrix2x2::Matrix2x2(){
    
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++) {
            if (i == j) {
                mat[i][j] = 1;
            }
            else{
                mat[i][j] = 0;
            }
        }
    }

}
Matrix2x2::Matrix2x2(double a, double b, double c, double d){
    set(0, 0, a);
    set(0, 1, b);
    set(1, 0, c);
    set(1, 1, d);
}
double Matrix2x2::get(int row, int column){

    double value = mat[row][column];
    return value;

}
void Matrix2x2::set(int row, int column, int value){

    mat[row][column] = value;

}
void Matrix2x2::print(){
    for (int row = 0; row<2; row++){
        cout << " ";
        for (int col = 0; col<2; col++){
            cout << setprecision(2) << mat[row][col];
        }
    }
}
double Matrix2x2::det() const{
    double result;
    result = this->mat[0][0] * this->mat[1][1] - this->mat[0][1] * this->mat[1][0];

    return result;
}
Matrix2x2 Matrix2x2::operator*(const double rhs){
    Matrix2x2 result;
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++) {
            result.mat[i][j] = this->mat[i][j] * rhs;
        }
    }
    return result;
}
Matrix2x2 Matrix2x2::inverse() const{
    Matrix2x2 result(0,0,0,0);
    
    if (this->det()!=0) {
        
        double kDet = this->det();
        
        result.mat[0][0] = this->mat[1][1];
        result.mat[1][1] = this->mat[0][0];
        result.mat[0][1] = -this->mat[0][1];
        result.mat[1][0] = -this->mat[1][0];
        
        result = result * (1/kDet);
        return result;
    }
    else{
        return result;
    }
}

Vector2 Matrix2x2::operator*(const Vector2& rhs){       // set()
    Vector2 result(0,0);
    
    for (int i = 0; i<2; i++) {
        result.set(i, this->mat[i][0]*rhs.get(0) + this->mat[i][1]*rhs.get(1));
    }
    return result;
}


Vector2 Matrix2x2::operator\(const Vector2& rhs){

}






