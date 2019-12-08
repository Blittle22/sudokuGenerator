#ifndef _ROW_H_
#define _ROW_H_
#include <vector>
#include "Tile.h"

class Row{

friend class Tile;
friend class Grid;

public:
    Row();                      //Default Constructor
    Row(int);                   //Int Constructor
    Row(int,int);               //Int Tile Constructor
    ~Row();                     //Default Destructor

    void setRowTiles(int,int);  //setRowTiles void function

    void printRow();            //printRow void function
private:
    vector<Tile> row;
};
#endif