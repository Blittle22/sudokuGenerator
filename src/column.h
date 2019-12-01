#ifndef _COLUMN_H_
#define _COLUMN_H_
#include <iostream>
#include <vector>
#include "tile.h"

class Column{

public:
    Column();
    ~Column();
    Tile getCell(int index);
    void addCell();

private:
    friend class Tile;
    std::vector<Tile> columnValues;
};
#endif