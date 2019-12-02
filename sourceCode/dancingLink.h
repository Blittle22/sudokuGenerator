#include <iostream>
#include <vector>
#include "tile.h"
#include "column.h"
#include "row.h"
#include "grid.h"

#ifndef _DANCINGLINK_H_
#define _DANCINGLINK_H_


struct Node
{
    public: 
        struct Node *left;
        struct Node *right;
        struct Node *up;
        struct Node *down;
        struct Node *column;

        // Unsure if we need the following items below, keep for now
        // int rowID; 
        // int colID;
        // int nodeCount;
};

class dancingLink
{
    friend class Row;
    friend class Tile;
    friend class Column;
    friend class Grid;

    public:
        Link();                                 // Contstructor
        ~Link();                                // Destructor
        void cover(struct Node *targetNode);    // Function to cover, or delete the pointers to nodes 
        void uncover(struct Node *targetNode);  // Funtion to uncover, or reinsert the nodes
    
    private:
        // 

};
#endif