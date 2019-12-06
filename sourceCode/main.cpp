#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

using namespace std;

int main()
{
    int columns = 9;
    int rows = 9;
    int array[rows][columns];
    
    srand(time(NULL));
    for(int i=0; i < rows; i++){
        for(int j=0; j < columns; j++){
            int random = rand() % 9 + 1;
            array[i][j] = random;
            cout<<array[i][j];
        }
        cout<<endl;
    }
    return 0;
}