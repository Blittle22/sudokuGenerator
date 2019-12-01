#include "tile.h"

//Constructor
Tile::Tile(){
    value = 0;
};

//Destructor
Tile::~Tile(){};

//Getter
int Tile::get(){
    return value;
};

//Setter
void Tile::set(int setVar){
    this->value = setVar;
};