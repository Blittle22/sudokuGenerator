#ifndef _TILE_H_
#define _TILE_H_
#include <iostream>

using namespace std;

class Tile{

friend class Grid;
friend class Row;

public:
    Tile();             //Default Constructor
    Tile(int);          //Int Constructor
    ~Tile();            //Default Destructor 

    void setTile(int);  //setTile void function

    void printTile();   //printTile void function
private:
    int value;
};
#endif