#include "Grid.h"

//Default Constructor
Grid::Grid() : grid(9,Row(9)){};              

//Int Constructor
Grid::Grid(int input) : grid(input,Row(input)){}; 

//Int Row Constructor
Grid::Grid(int input, int tileValue) : grid(input,Row(input,tileValue)){};

//Default Destructor
Grid::~Grid(){                                                  
    this->grid.~vector();                                 
};                                            

//setRow void function
void Grid::setGridRows(int gridIndex, int rowIndex, int tileValue){
    this->grid[gridIndex].setRowTiles(rowIndex,tileValue);
};   

//printGrid void function
void Grid::printGrid(){
    cout<<"-------------------\n";
    for (size_t i = 0; i < this->grid.size(); i++){
        this->grid.at(i).printRow();
        cout<<endl;
        cout<<"-------------------\n";
    }
};