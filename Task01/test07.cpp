#include <iostream>

using namespace std;

int main()
{
	int size;

	cout << "Enter array size: ";
	cin >> size;

	int* array = new int[size];

	*array = 1;
	*(array + 1) = 11;
	*(array + 2) = 111;
	*(array + 3) = 1111;
	*(array + 4) = 11111;

	cout << "Array: " << *array << " - " << array[0] << ", " 
					  << *(array + 1) << " - " << array[1] << ", " 
					  << *(array + 2) << " - " << array[2] << ", " 
					  << *(array + 3) << " - " << array[3] << ", " 
					  << *(array + 4) << " - " << array[4] << endl;

	delete[] array;

	return 0;
}