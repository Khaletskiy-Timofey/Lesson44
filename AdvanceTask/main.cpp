#include <time.h>
#include "logic.h"
#include "utils.h"

int main()
{
	srand(time(0));

	int* array;
	int size;

	cout << "Enter size of array: ";
	cin >> size;

	array = new int[size];

	int min_number, max_number;
	bool is_next_try = false;

	do {
		if (is_next_try)
		{
			cout << "Can't initialize array with this range!" << endl;
		}
		is_next_try = true;
		cout << "Enter range of elements (min max): ";
		cin >> min_number >> max_number;
	} while ((min_number < 0 ? -min_number : min_number) + (max_number < 0 ? -max_number : max_number) + 1 < size);

	init_array(array, size, min_number, max_number);

	cout << "Array before change: " << array_to_string(array, size) << endl;

	swap_extreme_elements(array, size);

	cout << "Array after change: " << array_to_string(array, size) << endl;

	delete[] array;

	return 0;
}