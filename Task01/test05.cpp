//#include <iostream>
//
//using namespace std;
//
//int* test()
//{
//	int* array = new int[5];
//	*array = 1;
//	*(array + 1) = 2;
//	*(array + 2) = 3;
//	*(array + 3) = 4;
//	*(array + 4) = 5;
//
//	return array;
//}
//
//int main()
//{
//	int* array = test();
//
//	cout << "Array: ";
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << array[i] << " ";
//	}
//
//	cout << endl;
//
//	delete[5] array;
//
//	return 0;
//}