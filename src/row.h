#ifndef _ROW_H_
#define _ROW_H_
#include <iostream>
#include <vector>
#include "tile.h"

class Row{

public:
    Row();
    Row(int);
    ~Row();
    Tile getCell(int);
    void addCell();
    void setCell(int,int);

private:
    friend class Tile;
    std::vector<Tile> rowValues;
};
#endif