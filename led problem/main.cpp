
// C++ Program to print the elements of a
// Two-Dimensional array
#include<iostream>
using namespace std;
 void printGrid(int arr[10][10]){
     for (int i = 0; i < 10 ; i++)
    {
        for (int j = 0; j < 10 ; j++)
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
 void count(int arr[10][10]){
    int c = 0;
      for (int i = 0; i < 10 ; i++)
    {
        for (int j = 0; j < 10 ; j++)
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


  //  looping partialy to toggle state
    int r = 0;
    int c = 1 ;

for (int row = 0; row < 10-4; row++){
    for (int col = 0; col < 10/2+1 ; col++){
        c = col ;
        r = row ;
        //  looping partialy to toggle state
        for (int i = r; i < r+5; i++){
            for (int j = c; j < c+5 ; j++){
                grid[i][j] = toggleElement(grid[i][j]);
            }
        }


    }
}

  printGrid(grid);
  count(grid);
    return 0;
}
