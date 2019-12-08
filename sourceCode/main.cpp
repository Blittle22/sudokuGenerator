#include <iostream>
#include <iomanip>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include "dancingLink.h"
#include "Grid.h"
#include "Row.h"
#include "Tile.h"

using namespace std;

int main()
{
    int dimension = 9;

    ///////////////////////////////////////////
    //  Working Class Derived solution to 
    //  problem of generating Sudoku game
    ///////////////////////////////////////////

    //Builds 9x9 grid of zeros
    Grid braski(dimension); 

    //Fills the grid with a random number at each position
    srand(time(NULL));
    for (size_t gridIndex = 0; gridIndex < dimension; gridIndex++){
        for (size_t rowIndex = 0; rowIndex < dimension; rowIndex++){
            int randomNumber = rand() % 9 + 1;
            braski.setGridRows(gridIndex,rowIndex,randomNumber);
        }  
    }

    //Prints grid for correctness verification
    braski.printGrid();






    system("pause");
    return 0;
}