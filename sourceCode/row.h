#ifndef _ROW_H_
#define _ROW_H_
#include <iostream>
#include <vector>

class Row{
public:
    Row();
    ~Row();
    std::vector<Tile> get();
    void addCell();
private:
    std::vector<Tile> rowValues;
};
#endif