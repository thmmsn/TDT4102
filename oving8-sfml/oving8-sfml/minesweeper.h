#pragma once

struct Tile{
    bool open;
    bool mine;
    
};

class Minesweeper {
private:
    // Legg til de medlemsvariablene og hjelpefunksjonene du trenger
    Tile **mat;
    int row, col;
    bool play;
public:
    Minesweeper(int width, int height, int mines);
    ~Minesweeper();
    
    bool isGameOver() const;
    
    bool isTileOpen(int row, int col) const;
    bool isTileMine(int row, int col) const;
    
    void openTile(int row, int col);
    
    int numAdjacentMines(int row, int col) const;
    
    // Vi slår av autogenerert kopikonstruktør og tilordningsoperator for å unngå feil
    Minesweeper(const Minesweeper &) = delete;
    Minesweeper &operator=(const Minesweeper &) = delete;
};
