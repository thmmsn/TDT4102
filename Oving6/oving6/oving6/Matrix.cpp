//
//  Matrix.cpp
//  oving6
//
//  Created by fredrik on 26/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include "Matrix.h"

std::ostream &operator<<(std::ostream &out, const Matrix &matrix){
  
    for (int r = 0; r < matrix.getNumRows(); r++) {
        //out << matrix.get(r, 0);
        for (int c = 0; c < matrix.getNumColumns(); c++) {
            out << " " << matrix.get(r, c);
        }
        out << std::endl;
    }
    
    return out;
}
Matrix &Matrix::operator=(Matrix rhs ){
    std::swap(this->mat,rhs.mat);
    std::swap(this->nRows,rhs.nRows);
    std::swap(this->nColumns,rhs.nColumns);
    return *this;
}
Matrix &Matrix::operator+=(Matrix &rhs){
 /*
    bool cLHS = this->isValid();
    bool cRHS = rhs.isValid();
    
    if ((cLHS * cRHS != 0) && (this->nRows == rhs.nRows) && (this->nColumns == rhs.nColumns)) {
        
        
        
        for (int i = 0; i < rhs.nRows; i++) {
            for (int j = 0; j < rhs.nRows; j++) {
                this->mat[i][j] = this->mat[i][j] + rhs.get(i, j);
            }
        }
    }
    
    else {
        this->mat = nullptr;
        std::cout << "Feil dimensjon" << std::endl;
    }
  */
    
    return *this = *this + rhs;
}
Matrix &Matrix::operator+(Matrix &rhs){
    Matrix result(rhs.nRows, rhs.nColumns);
    bool cLHS = this->isValid();
    bool cRHS = rhs.isValid();
    
    if ((cLHS * cRHS != 0) && (this->nRows == rhs.nRows) && (this->nColumns == rhs.nColumns)) {

        for (int i = 0; i < rhs.nRows; i++) {
            
            for (int j = 0; j < rhs.nColumns; j++) {
                
                result.mat[i][j] = this->get(i, j) + rhs.get(i, j);
            }
        }
    }
    
    else {
        result.mat = nullptr;
        std::cout << "ERROR: Feil dimensjon" << std::endl;
    }
    
    return giresult;


}
Matrix::Matrix(){
    
    /*
     * Konstruerer en ugyldig matrise
     */
    
    this->mat = nullptr; //nullptr
    nRows = 0;
    nColumns = 0;
}
Matrix::Matrix(unsigned int nRows, unsigned int nColumns): nRows(nRows), nColumns(nColumns){
    
    /*
     * Skriver inn
     */
    
    mat = new double*[nRows];
    
    for (int i = 0; i<nRows; i++) {
        mat[i] = new double[nColumns];
        for (int j = 0; j<nColumns; j++) {
            mat[i][j] = 0;
        }
    }
}
Matrix::Matrix(unsigned int y) : Matrix(y,y) {
    
    /*
     * konstruerer en i x i identitets-matrise
     */

    for (int i = 0; i < nRows; i++) {
        mat[i][i] = 1;
    }
}
double Matrix::get(unsigned int i, unsigned int j) const{
    
    /*
     * Henter ut verdien til lelement (i,j)
     */
    
    double value = this->mat[i][j];
    return value;
    
}
void Matrix::set(unsigned int i, unsigned int j, double value){
    
    /*
     * Setter verdien til element (i,j)
     */
    
    mat[i][j] = value;
    
}
bool Matrix::isValid() const{
    /*
     * Returnerer true/false om matrisen er gyldig/ugyldig
     */
    
    return !(mat==nullptr);

}
int Matrix::getNumRows() const{
    return  nRows;
}
int Matrix::getNumColumns() const{
    return nColumns;
}
void Matrix::randomGenerator(){
    int randomValue;
    int rows = this->getNumRows();
    int cols = this->getNumColumns();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            randomValue = rand() % 100;
            this->set(i, j, randomValue);
        }
    }
}

