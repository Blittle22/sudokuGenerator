#ifndef _COLUMN_H_
#define _COLUMN_H_
#include <iostream>
#include <vector>
#include <iostream>
#include <vector>
#include "tile.h"
#include "dancingLink.h"
#include "row.h"
#include "grid.h"

class Column{

    friend class Grid;
    friend class Row;
    friend class Tile;

public:
    Column();
    ~Column();
    std::vector<Tile> get();
    void addCell();
private:
    std::vector<Tile> columnValues;
};
#endif