#include <stdio.h>


// This is the Greedy implementation of the Activity Selection Algorithm.


struct activity
{

char id[10];
int start_time;
int finish_time;

};


void FindActivitySelection(struct activity activity_f[] , int n)
{
	// First task is to sort the activity in as per the finishing time in ascending order.

	struct activity swap;


	// Step : 1

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n -1 ; j++)
		{
			if(activity_f[j].finish_time > activity_f[j+1].finish_time)
			{
				swap = activity_f[j];
				activity_f[j] = activity_f[j+1];
				activity_f[j+1] = swap; 
			}
		}
	}


	// Lets print the sorted Activities

	printf("Sorted activities are:\n");
	printf("%15s %15s %15s\n" , "Activity" , "Start time" , "Finish time");
	for (int i = 0 ; i < n; i ++)
	{
		printf("%15s %15i %15i\n" , activity_f[i].id, activity_f[i].start_time , activity_f[i].finish_time);
	}



	// Step 2 
	// Pick the first activity and print.

	printf("SELECTED ACTIVITIES \n");
	printf("%15s %15s %15s\n" , "Activity" , "Start time" , "Finish time");
	printf("%15s %15i %15i\n" , activity_f[0].id, activity_f[0].start_time , activity_f[0].finish_time);

	// Step - 3 
	// Select the next activity whose start time is greater then or equal to the finish time of the previos selected activity.


	int selected = 0 ; 

	for (int i =0; i <n; i++)
	{
		if(activity_f[i].start_time >= activity_f[selected].finish_time)
		{
			printf("%15s %15i %15i\n" , activity_f[i].id, activity_f[i].start_time , activity_f[i].finish_time);
			selected = i;
		}
	}






}






int main()
{

	// First Let's Define and create the activities.


	struct activity  activity_t[10] = {

		{"a1" , 1 , 4},
		{"a2" , 0 , 2},
		{"a3" , 5 , 8},
		{"a4" , 3 , 4},
		{"a5" , 2 , 6},
		{"a6" , 4 , 10},
		{"a7" , 1 , 3},
		{"a8" , 3 , 9},
		{"a9" , 4 , 7},
		{"a10" , 0 , 5}
	};

	// Numer of activities 

	int n = 10;


	FindActivitySelection(activity_t , n);

}

