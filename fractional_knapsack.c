#include <stdio.h>


// This is the Greedy implementation of the Fractional Knapsack Algorithm.


struct items
{

char id[10];
int value;
int weight;
float value_density;

};




int main()
{

	// Lets first define the list of the items which we have.

	struct items items_t[10] = {


		{"item1" , 10 , 3, 0.0},
		{"item2" , 20 , 5, 0.0},
		{"item3" , 43 , 4, 0.0},
		{"item4" , 12 , 6, 0.0},
		{"item5" , 3 , 7, 0.0},
		{"item6" , 54 , 9, 0.0},
		{"item7" , 65 , 15, 0.0},
		{"item8" , 21 , 14, 0.0},
		{"item9" , 33 , 21, 0.0},
		{"item10" , 56 , 28, 0.0}
	}; 






}
