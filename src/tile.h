#ifndef _TILE_H_
#define _TILE_H_

class Tile{

public:
    Tile();
    Tile(int);
    ~Tile();
    int get();
    void set(int);
    
private:
    friend class Grid;
    friend class Column;
    friend class Row;
    int value;
};
#endif