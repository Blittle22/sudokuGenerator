#include "Row.h"

//Default Constructor
Row::Row() : row(9,Tile()){};

//Int Constructor
Row::Row(int input) : row(input,0){};

//Int Tile Constructor
Row::Row(int input,int tileValue) : row(input,Tile(tileValue)){};

//Default Destructor
Row::~Row(){
    this->row.~vector();
};                      
          
//setRowTiles void function
void Row::setRowTiles(int index, int input){
    this->row[index].setTile(input);
};  

//printRow void function
void Row::printRow(){
    for (size_t i = 0; i < this->row.size(); i++){
        if(i == 0){
            cout<<"|";
        }
        this->row.at(i).printTile();
        cout<<"|";
    }
};
