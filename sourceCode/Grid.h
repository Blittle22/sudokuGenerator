#ifndef _GRID_H_
#define _GRID_H_
#include "Tile.h"
#include "Row.h"
#include <iomanip>

using namespace std;

class Grid{

friend class Tile;
friend class Row;

public:
    Grid();                         //Default Constructor
    Grid(int);                      //Int Constructor
    Grid(int,int);                  //Int Row Constructor
    ~Grid();                        //Default Destructor

    void setGridRows(int,int,int);  //setRow void function

    void printGrid();               //printGrid void function
private:
    vector<Row> grid;
};
#endif