#ifndef _COLUMN_H_
#define _COLUMN_H_
#include <iostream>
#include <vector>

class Column{
public:
    Column();
    ~Column();
    std::vector<Tile> get();
    void addCell();
private:
    std::vector<Tile> columnValues;
};
#endif