//Andres Orellana
//Tests
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Sorts.h"

void randomize_array(int *array, int size);

int main(void)
{  
	int unsorted1[5] = {1, 3, 2, 4, 0}; 
	int sorted[5] = {0, 1, 2, 3, 4}; 
	int unsorted2[5] = {20, 11, 11, 47, 32};
	int sorted1[5] = {11, 11, 20, 32, 47};
	int unsorted3[5] = {24, 1, 36, 5, 2};
	int sorted2[5] = {1, 2, 5, 24, 36};
	
	//sorts the unsorted arrays
	insertionSort(unsorted1, 5);
	insertionSort(unsorted2, 5);
	insertionSort(unsorted3, 5);
	
	//compares the same index of the sorted and unsorted array
	//they all should equal since the unsorted should be sorted now
	assert(sorted[0] == unsorted1[0]);
	assert(sorted[4] == unsorted1[4]);
	assert(sorted[2] == unsorted1[2]);
	
	assert(sorted1[0] == unsorted2[0]);
	assert(sorted1[4] == unsorted2[4]);
	assert(sorted1[2] == unsorted2[2]);
	
	assert(sorted2[1] == unsorted3[1]);
	assert(sorted2[3] == unsorted3[3]);
	assert(sorted2[2] == unsorted3[2]);
	
	randomize_array(unsorted1, 5);
	randomize_array(unsorted2, 5);
	randomize_array(unsorted3, 5);
	
	//sorts the unsorted arrays
	selectionSort(unsorted1, 5);
	selectionSort(unsorted2, 5);
	selectionSort(unsorted3, 5);
	
	//compares the same index of the sorted and unsorted array
	//they all should equal since the unsorted should be sorted now
	assert(sorted[0] == unsorted1[0]);
	assert(sorted[4] == unsorted1[4]);
	assert(sorted[2] == unsorted1[2]);
	
	assert(sorted1[1] == unsorted2[1]);
	assert(sorted1[2] == unsorted2[2]);
	assert(sorted1[3] == unsorted2[3]);
	
	assert(sorted2[1] == unsorted3[1]);
	assert(sorted2[3] == unsorted3[3]);
	assert(sorted2[2] == unsorted3[2]);
	
	randomize_array(unsorted1, 5);
	randomize_array(unsorted2, 5);

	//sorts the unsorted arrays
	bubbleSort(unsorted1, 5);
	bubbleSort(unsorted2, 5);
	bubbleSort(unsorted3, 5);
	
	//compares the same index of the sorted and unsorted array
	//they all should equal since the unsorted should be sorted now
	assert(sorted[0] == unsorted1[0]);
	assert(sorted[4] == unsorted1[4]);
	assert(sorted[2] == unsorted1[2]);
	
	assert(sorted2[1] == unsorted3[1]);
	assert(sorted2[3] == unsorted3[3]);
	assert(sorted2[2] == unsorted3[2]);
	
	return 0;
}


void randomize_array(int *array, int size)
{
	int i;
	int num;
	int temp;
	srand(time(NULL));
	for(i = 0; i < size; i++)
	{
		num = rand() % size;
		temp = array[num];
		array[num] = array[i];
		array[i] = temp;
	}
}