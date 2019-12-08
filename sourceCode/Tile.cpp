#include "Tile.h"

Tile::Tile() : value{0}{};              //Default Constructor 

Tile::Tile(int input) : value{input}{}; //Int Constructor

Tile::~Tile(){};                        //Default Destructor

void Tile::setTile(int input){          //setTile void function
    this->value = input;
};     

void Tile::printTile(){                 //printTile void function
    cout<<this->value;
};