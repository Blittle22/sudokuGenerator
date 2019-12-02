#include <iostream>
#include <vector>
#include "dancingLink.h"
#include "column.h"
#include "row.h"
#include "grid.h"

#ifndef _TILE_H_
#define _TILE_H_

class Tile{

friend class Row;
friend class Column;
friend class Grid;
friend class dancingLink;

public:
    Tile();
    ~Tile();
    int get();
    void set(int);
private:
    int value;
};
#endif