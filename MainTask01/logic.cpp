#include "logic.h"

int find_max_element_index(int* array, int size)
{
	int max_index = size - 1;

	for (int i = size - 2; i >= 0; i--)
	{
		if (abs(array[i]) > abs(array[max_index]))
		{
			max_index = i;
		}
	}

	return max_index;
}

int find_min_element_index(int* array, int size)
{
	int min_index = 0;

	for (int i = 1; i < size; i++)
	{
		if (abs(array[i]) < abs(array[min_index]))
		{
			min_index = i;
		}
	}

	return min_index;
}

int find_sum_of_elements(int* array, int size)
{
	int max_index = find_max_element_index(array, size);
	int min_index = find_min_element_index(array, size);

	if (max_index < min_index)
	{
		int t = min_index;
		min_index = max_index;
		max_index = t;
	}

	int sum = 0;

	for (int i = min_index + 1; i < max_index; i++)
	{
		sum += array[i];
	}

	return sum;
}