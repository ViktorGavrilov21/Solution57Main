#include "logic.h"

int main() {
	int array[]{ -5, -3, -2, -1, 0, 6, 7, 8, 9, 10 };
	int size = 10;

	//int array[];
	//int size;

	//cout << "Input size: ";
	//cin >> size;

	//cout << "Input elements of array: ";
	//for (int i = 0; i < size; i++) {
	//	cin >> array[i];
	//}
	int num;

	cout << "Input your number: ";
	cin >> num;

	print("Array: " + convert(array, size) + "\n");
	print(binary_search(array, size, num)
		? "Yes, your number is in the array\n"
		: "No, your number isn`t in the array\n");


	return 0;
}