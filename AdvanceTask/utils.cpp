#include "utils.h"

void init_array(int* array, int size, int start, int end)
{
	for (int i = 0; i < size; i++)
	{
		int el;

		while (true)
		{
			el = rand() % (end - start + 1) + start;
			bool is_unique = true;

			for (int j = 0; j <= i; j++)
			{
				if (el == array[j])
				{
					is_unique = false;
					break;
				}
			}
			if (is_unique)
			{
				break;
			}
		}

		array[i] = el;
	}
}

string array_to_string(int* array, int size)
{
	string array_string = "";

	for (int i = 0; i < size; i++)
	{
		array_string += to_string(array[i]) + " ";
	}

	return array_string;
}