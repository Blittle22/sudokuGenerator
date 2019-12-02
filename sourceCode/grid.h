#ifndef _GRID_H_
#define _GRID_H_
#include <iostream>
#include <vector>
#include <iostream>
#include <vector>
#include "tile.h"
#include "column.h"
#include "row.h"
#include "dancingLink.h"

class Grid{

    friend class Tile;
    friend class Row;
    friend class Column;
    friend class dancingLink;

public:
    Grid();
    ~Grid();
    std::vector<Row> getRow();
    std::vector<Column> getColumn();
    void addRow();
    void addColumn();
private:
    std::vector<Row> rows;
    std::vector<Column> columns;
};
#endif