#ifndef _ROW_H_
#define _ROW_H_
#include <iostream>
#include <vector>
#include "tile.h"

class Row{

public:
    Row();
    ~Row();
    Tile getCell(int);
    void addCell(Tile);

private:
    friend class Tile;
    std::vector<Tile> rowValues;
};
#endif