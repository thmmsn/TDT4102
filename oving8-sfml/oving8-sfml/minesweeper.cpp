#include "minesweeper.h"

Minesweeper::Minesweeper(int width, int height, int mines) {
    row = width;
    col = height;
    
    mat = new Tile* [width];
    for (int i = 0; i<row; i++) {
        mat[i] = new Tile [width];
    }

    while (mines != 0) {
        
        
        
        mines = mines - 1;
    }
    
}

Minesweeper::~Minesweeper() {
    
}

bool Minesweeper::isGameOver() const {
    return false;
}

bool Minesweeper::isTileOpen(int row, int col) const {
    return false;
}

bool Minesweeper::isTileMine(int row, int col) const {
    
    if (mat[row][col].mine == true) {
        <#statements#>
    }
    
    return false;
}

void Minesweeper::openTile(int row, int col) {
    
}

int Minesweeper::numAdjacentMines(int row, int col) const {
    return 0;
}
