#include <stdlib.h>
#include "minesweeper.h"

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
    

    if (mat[row][col].open == true) {
        return true;
    }
    else if (mat[row][col].open == false){
        return false;
    }
}

bool Minesweeper::isTileMine(int row, int col) const {
    //
    // Sjekker om element mat(row, col) inneholder en mine.
    //
    
    if (mat[row][col].mine == true) {
        return true;
    }
    else{
        return false;
    }

}

void Minesweeper::openTile(int row, int col) {
    bool open = Minesweeper::isTileOpen(row, col);
    if (open == false) {
        mat[row][col].open = true;
        if (mat[row][col].mine == true) {
            play = false;
            isGameOver();
        }
    }
    else {
        // SETT INN FEILMELDING HER [##]
    }
}

int Minesweeper::numAdjacentMines(int row, int col) const {
    return 0;
}

