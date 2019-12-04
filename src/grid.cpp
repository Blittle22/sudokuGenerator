#include "grid.h"
#include <stdlib.h>
#include <time.h>

//Constructor
Grid::Grid(){};

//Destructor
Grid::~Grid(){};

//addRow
void Grid::addRow(int size){
    rows.push_back(Row(size));
};

//getRow
Row Grid::getRow(int index){
    return rows.at(index);
};

//build & fill
void Grid::buildAndFill(int dimension){
    srand(time(NULL));
    Row values();
    Tile value();
    for(size_t i = 1; i < dimension + 1; i++){
        for(size_t j = 1; j < dimension + 1; j++){
            int randomNumber = rand() % 9 + j;
            value.set(randomNumber);
            values[i][j] = value;
        }
    }
};
