// #include "selectionSort.cpp"
#include <ctime>
#include <iostream>

using namespace std;

template <class ItemType>

void selectionSort(ItemType array[], int size) 
{
	int i, j; //Counter

	for (j = 0; j < size; j++)
	{
		int min = j;
		for(i = j + 1; i < size; i++)
		{
			if (array[i] < array[min])
				min = i;
		}

		if (min != j) {
			ItemType temp = array[j];
			array[j] = array[min];
			array[min] = temp;
		}
	}
}


int main()
{
	int const SIZE = 1000000;

	int* unsorted_array = new int[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		unsorted_array[i] = SIZE - i;
		cout << unsorted_array[i] << endl;
		
	}

	clock_t t;
	t = clock();
	selectionSort(unsorted_array, SIZE);
	t = clock() - t;
	

	for (int i = 0; i < SIZE; i++)
	{
		
		cout << unsorted_array[i] << endl;
	}

	cout << (float) t / CLOCKS_PER_SEC << " seconds." << endl;

	return 0;


}