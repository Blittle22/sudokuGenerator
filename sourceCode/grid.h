#ifndef _GRID_H_
#define _GRID_H_
#include <iostream>
#include <vector>

class Grid{
public:
    Grid();
    ~Grid();
    std::vector<Row> getRow();
    std::vector<Coulmn> getColumn();
    void addRow();
    void addColumn();
private:
    std::vector<Row> rows;
    std::vector<Column> columns;
};
#endif