#ifndef _GRID_H_
#define _GRID_H_
#include <iostream>
#include <vector>
#include "row.h"

class Grid{

public:
    Grid();
    ~Grid();
    Row getRow(int);
    void addRow(int);
    void buildAndFill(int);

private:
    friend class Row;
    friend class Tile;
    std::vector<Row> rows;
};
#endif