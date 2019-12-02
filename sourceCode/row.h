#include <iostream>
#include <vector>
#include "tile.h"
#include "column.h"
#include "dancingLink.h"
#include "grid.h"

#ifndef _ROW_H_
#define _ROW_H_

class Row{

    friend class Grid;
    friend class Column;
    friend class Tile;
    friend class dancingLink;

public:
    Row();
    ~Row();
    std::vector<Tile> get();
    void addCell();
private:
    std::vector<Tile> rowValues;
};
#endif