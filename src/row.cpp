#include "row.h"

//Constructor
Row::Row(){};

//Constructor for selected size
Row::Row(int size){
    for(size_t i = 0; i < size; i++){
        addCell();
    };
};

//Destructor
Row::~Row(){};

//getCell
Tile Row::getCell(int index){
    return rowValues.at(index);
};

//setCell
void Row::setCell(int index,int value){
    this->getCell(index) = Tile(value);
};

//addCell
void Row::addCell(){
    this->rowValues.push_back(Tile());
};