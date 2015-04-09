//Andres Orellana
//Insertion Sort
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Sorts.h"


int main(int argc, char *argv[])
{   
	char *func = argv[1];
	int i;
	int newar[argc - 2];
	int size = argc - 2;
	
	//sets the arguments for the new array to pass to the function
	for(i = 0; i < size; i++)
	{
		newar[i] = strtol(argv[i + 2], NULL, 10);
	}

	//calls the function and gives it the parameters
    switch(func[0])
    {
    	case 'i': insertionSort(newar, size);
    		break;
    	case 's': selectionSort(newar, size);
    		break;
    	case 'b': bubbleSort(newar, size);
    		break;
    	default: puts("command not found");
    	
    }
    
    //prints out array
    for(i = 0; i < size; i++)
	{
		printf("%d ", newar[i]);
	}
	puts("\n");
	
	return 0;
}