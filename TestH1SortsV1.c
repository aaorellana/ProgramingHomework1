//Andres Orellana
//Tests

#include <stdio.h>
#include "H1SortsV1.h"

int main(void)
{  
	int test[5] = {1, 3, 2, 4, 0};
	int i;
	
	insertionSort(test, 5);
	
	for(i = 0; i < 5; i++)
	{
		printf("%d ", test[i]);
	}
	puts("\n");
	return 0;
}