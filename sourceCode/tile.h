#ifndef _TILE_H_
#define _TILE_H_

class Tile{

friend class Row;
friend class Column;
friend class Grid;

public:
    Tile();
    ~Tile();
    int get();
    void set(int);
private:
    int value;
};
#endif