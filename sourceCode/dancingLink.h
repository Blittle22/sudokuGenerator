#include <iostream>
#include <vector>
#include "tile.h"
#include "row.h"
#include "grid.h"

#ifndef _DANCINGLINK_H_
#define _DANCINGLINK_H_


struct Node{
    /* Pointers for each direction */
    struct Node *left;
    struct Node *right;
    struct Node *up;
    struct Node *down;
    struct Node *head;  // Node used at the moment

    int size;       // Size of the 
    int rowID[3];   // Used to identify row in order to map solutions to sudoku grid
    // rowID = (Candidate, Row, Column)
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