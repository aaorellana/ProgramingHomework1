void insertionSort(int *array, int size);

void bubbleSort(int *array, int size);

void selectionSort(int *array, int size);


void insertionSort(int *array, int size)
{
	int i;
	int j;
	int temp;

	for(i = 1; i < size; i++)
	{
		j = i;
		while((j > 0) && (array[j - 1] > array[j]))
		{
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
	
	while(swapped != 0)
	{
		//printf("%d", i);
		swapped = 0;
		for(i = 1; i < size; i++)
		{
			//printf("%d", i);
			if(array[i - 1] > array[i])
			{
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
		for(i = j + 1; i < size; i++)
		{
			if(array[i] < array[min])
			{
				min = i;
			}
		}
		if(min != j)
		{
			temp = array[min];
			array[min] = array[j];
			array[j] = temp;
		}
		
	}
	
}