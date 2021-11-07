

#include <bits/stdc++.h>
using namespace std;

void findMinCoins(int V)
{

// How the Algorithm works ?
/*
approch 1 :  we can have a loop from 1 to n and each time we subtract the largrst number of coin who minimize total number 
analysis : O(n)
> since division is a repeated subtraction we can use second approch 
approach 2 : divide n by the whole coins we have and sum of rem of each is the number of minimum coins required
analysis = O(1)
*/

// coins : { 1,5,10,20,50,100 }
	int c = 0 ;
	c = c + (V/100);
	V = V % 100 ;
	c = c + (V/50);
	V = V % 50 ;
	c = c + (V/20);
	V = V % 20 ;
	c = c + (V/10);
	V = V % 10 ;
	c = c + (V/5);
	V = V % 5 ;
	c = c + (V/1);
	V = V % 1 ;


cout << " The minimum number of coins required   :  " << c ;
}

int main()
{
	int n = 120; // coins req : 100 20 , c = 2 
	findMinCoins(n);
	return 0;
}
