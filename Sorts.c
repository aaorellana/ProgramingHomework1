#include "Sorts.h"

void insertionSort(int *array, int size)
{
	int i;
	int j;
	int temp;

	for(i = 1; i < size; i++)
	{
		j = i;
		//inserts the value in the correct index and shifts the elements to the right
		while((j > 0) && (array[j - 1] > array[j]))
		{	//swaps the elements
			temp = array[j-1];
			array[j - 1] = array[j];
			array[j] = temp;
			
			j = j - 1;
		}
	}
	
}

//help from http://en.wikipedia.org/wiki/Bubble_sort
void bubbleSort(int *array, int size)
{
	int i;
	int temp;
	int swapped;
	
	//loops until no elements have been swapped
	while(swapped != 0)
	{
		swapped = 0;
		for(i = 1; i < size; i++)
		{
			if(array[i - 1] > array[i])
			{	//swaps the elements
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swapped = 1;
			}
		}
	}
	
}

void selectionSort(int *array, int size)
{
	int i;
	int j;
	int min;
	int temp;
	
	for(j = 0; j < size - 1; j++)
	{
		min = j;
		//looks for the smallest value
		for(i = j + 1; i < size; i++)
		{
			if(array[i] < array[min])
			{
				min = i;
			}
		}
		if(min != j)
		{	//swaps the elements
			temp = array[min];
			array[min] = array[j];
			array[j] = temp;
		}
		
	}
	
}
