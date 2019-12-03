#include "grid.h"

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

//setRow
void Grid::setRow(int index, Row values){
    values = this->getRow(index);
};

//build
void Grid::build(int dimension){
    for(size_t i = 0; i < dimension; i++){
        this->addRow(dimension);
    }
};

//Fill
void Grid::fill(){
    int value {0};
    for (size_t i = 0; i < rows.size(); i++){
        
    }
    
};