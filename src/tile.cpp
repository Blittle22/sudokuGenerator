#include "tile.h"

//Constructor
Tile::Tile(){
    value = 0;
};

//Constructor with value
Tile::Tile(int var){
    value = var;
}

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