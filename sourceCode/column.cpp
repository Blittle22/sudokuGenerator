#include "column.h"

//Constructor
Column::Column(){};

//Constructor for selected size
Column::Column(int size){
    for(size_t i = 0; i < size; i++){
        addCell();
    };
};

//Destructor
Column::~Column(){};

//getCell
Tile Column::getCell(int index){
    return columnValues.at(index);
};

//setCell
void Column::setCell(int index,int value){
    this->getCell(index) = Tile(value);
};

//addCell
void Column::addCell(){
    columnValues.push_back(Tile());
};