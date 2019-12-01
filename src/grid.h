#ifndef _GRID_H_
#define _GRID_H_
#include <iostream>
#include <vector>
#include "row.h"
#include "column.h"

class Grid{

public:
    Grid();
    ~Grid();
    Row getRow(int index);
    Column getColumn(int index);
    void addRow();
    void addColumn();
    
private:
    friend class Row;
    friend class Column;
    friend class Tile;
    std::vector<Row> rows;
    std::vector<Column> columns;
};
#endif