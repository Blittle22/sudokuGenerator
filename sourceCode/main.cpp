#include <iostream>
#include "tile.h"
#include "column.h"
#include "row.h"
#include "grid.h"

using namespace std;

/* Making a Dancing Link Technique for the Sudoku Generator 

    This technique relies on the idea of a doubly circular linked list
        This has properties of both doubly linked list AND circular linked 
        list. 
    Using this idea, we can create a mesh of 4 way connected nodes with
    a pointer to a node left to it, right to it, above it, below it, 
    and a pointer to list header node to which it belongs.
    After we understand how things are linked within the list, we then
    go into the "covering", or deletion, of the node. 
    This specific data structure uses "Algoritm X", but in a more efficient
    way. When you remove a node, the node that you've removed has all the 
    information you need to add it back to the linked list.
*/

int main()
{





    return 0;
};