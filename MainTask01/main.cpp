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

	cout << "Enter range of elements (min max): ";
	cin >> min_number >> max_number;

	init_array(array, size, min_number, max_number);

	cout << "Array: " << array_to_string(array, size) << endl;

	int sum = find_sum_of_elements(array, size);

	cout << "sum of elements between min and max values: " << sum << endl;

	delete[] array;

	return 0;
}