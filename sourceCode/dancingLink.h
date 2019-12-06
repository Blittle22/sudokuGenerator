#include <fstream>
#include <vector>

#ifndef _DANCINGLINK_H_
#define _DANCINGLINK_H_

using namespace std;

struct Node{
    /* Pointers for each direction */
    Node *left;
    Node *right;
    Node *up;
    Node *down;
    Node *head;  // Node used at the moment

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
        dancingLink();                                 // Contstructor
        ~dancingLink();                                // Destructor
        void cover(struct Node *targetNode);    // Function to cover, or "delete" the pointers to nodes 
        void uncover(struct Node *targetNode);  // Funtion to uncover, or reinsert the nodes
    
    private:
        // 

};
#endif