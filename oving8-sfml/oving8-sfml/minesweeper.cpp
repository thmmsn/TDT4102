#include <stdlib.h>
#include <unistd.h>
#include "minesweeper.h"
#include <algorithm>

Tile::Tile(){
    open = false;
    mine = false;
}
Minesweeper::Minesweeper(int width, int height, int mines) {
    row = width;
    col = height;
    play = true;
    
    mat = new Tile* [width];
    for (int i = 0; i<row; i++) {
        mat[i] = new Tile [width];
    }

    while (mines > 0) {
        int x, y;
        x = rand() % row;
        y = rand() % col;
        
        if (mat[x][y].mine == false) {
            mat[x][y].mine = true;
            mines--;
        }
        
    }
}

Minesweeper::~Minesweeper() {
    for (int i = 0; i<row; i++) {
        delete[] mat[i];
    }
    delete[] mat;
}

bool Minesweeper::isGameOver() const {
    
    return !play;
}

bool Minesweeper::isTileOpen(int row, int col) const {
    // Sjekker om element row,col er åpnet
    return mat[row][col].open ;
}

bool Minesweeper::isTileMine(int row, int col) const {
    //
    // Sjekker om element mat(row, col) inneholder en mine.
    //
    
    if (mat[row][col].mine) {
        return true;
    }
    else{
        return false;
    }

}

bool Minesweeper::isInside(int x, int y) const{
    return (x > -1 && y > -1 && x < row && y < col);
}

void Minesweeper::openTile(int row, int col){

    if (!isInside(row, col) || mat[row][col].open ) {
        return;
    }
    if(isTileMine(row,col)){
        play=false;
    }
    int numMines = numAdjacentMines(row, col);
    mat[row][col].value = numMines;
    mat[row][col].open = true;
    
    if (numMines) {
        return;
    }
    
    for (int i = -1; i<2; i++){
        for (int j = -1; j<2; j++) {
            if (i == 0 && j == 0) {
                continue;
            }
            openTile(row+i, col+j); //åpner rutene rekursivt
        }
    }
    

}

/*void Minesweeper::openTile(int row, int col) {
    bool open = Minesweeper::isTileOpen(row, col);
    
    if (!isTileOpen(row, col)) {
        mat[row][col].open = true;
        
        while () {
            
        }
        
        if (isTileMine(row, col)) {
            play = false;
            isGameOver();
        }
    }
    else {
        // SETT INN FEILMELDING HER [##]
    }
}*/

int Minesweeper::numAdjacentMines(int row, int col) const {
    
    int nhbMines = 0;
    
    for (int i = std::max(row-1,0); i<std::min(row+2,this->row); i++) {
        
        for (int j = std::max(col-1,0); j<std::min(col+2,this->col); j++) {
            if (isTileMine(i, j)){
                nhbMines++;
            }
        }
    }
    
    return nhbMines;
}

