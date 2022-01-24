/*
Name : Amany Ahmed Mohammed
ID :2019565349
I tested the code on 10*10 and 25*25 grid
the project includes 3 functions
printGrid : just to print the array values in grid style
count : to count no of left lighted led lamps left
toggleElement : to toggle element state as input from 0 to 1 and vice versa
code :
    there are 4 for loops :
        - the outer 2 for loops : is to loop over the grid rows and columns and those loops
        will loop from 0 to the grid size-4

        - inner for loops : will loop partially to toggle the state of the 5*5 array

        and finally i print the final grid and the no of left led lighted values
*/
#include<iostream>
using namespace std;
 void printGrid(int arr[25][25]){
     for (int i = 0; i < 25 ; i++)
    {
        for (int j = 0; j < 25 ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }
 }
 int  toggleElement(int x){
    if(!x)
        return 1;
    else
        return 0;
     }
 void count(int arr[25][25]){
    int c = 0;
      for (int i = 0; i < 25 ; i++)
    {
        for (int j = 0; j < 25 ; j++)
        {
            c += arr[i][j];
        }
    }
    cout << "No of left light led lamps = " << c ;
      }

int main()
{
    //grid o 10*10
    int grid [10][10] = {{0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0} };
    // testing on grid 25*25
    //buid 25*25 grid
    int grid2 [25][25] ;
    for (int i = 0; i < 25 ; i++)
        {
            for (int j = 0; j < 25 ; j++)
            {
                grid2[i][j] = 0;
            }
        }
//  initial grid
//  printGrid(grid);

    int r = 0;
    int c = 1 ;

for (int row = 0; row < 25-4; row++){
    for (int col = 0; col < 25-4 ; col++){
        c = col ;
        r = row ;
        cout << " row : "<< r << "   col :  " << c <<endl;
        printGrid(grid2);
        //  looping partialy to toggle state
        for (int i = r; i < r+5; i++){
            for (int j = c; j < c+5 ; j++){
                grid2[i][j] = toggleElement(grid2[i][j]);
            }
        }
    }
}
//print grid and count lighted lamps
  printGrid(grid2);
  count(grid2);
    return 0;
}
