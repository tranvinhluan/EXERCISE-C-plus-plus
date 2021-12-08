/*
Ex2 : Tìm giá trị lớn nhất trong một mảng các giá trị kiểu số.
*/

#include <iostream>
using namespace std;

template <class T> T findMaxInArray(T *arr, size_t n) {
	T maxV = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] > maxV)
		{
			maxV = arr[i];
		}
	}
	return maxV; // V là value
}

int main() {
	int arrOfInt[] = { 1, 2, 6, 9, 7, 2, 3, 4, 0, -7 };
	double arrOfDouble[] = { 1.2, 5.4, 1.02, 6.98, 77.84, 9.12, 5.112, 4.35, 6.89 };
	char arrOfChar[] = { 'H', 'E', 'L', 'L', 'O', 'W', 'O', 'R', 'L','D' };

	cout << "Max value of int array: " << findMaxInArray(arrOfInt, sizeof(arrOfInt) / sizeof(int)) << endl;
	cout << "Max value of double array: " << findMaxInArray(arrOfDouble, sizeof(arrOfDouble) / sizeof(double)) << endl;
	cout << "Max value of char array: " << findMaxInArray(arrOfChar, sizeof(arrOfChar) / sizeof(char)) << endl;
	// đối với chữ, thứ tự càng về cuối thì giá trị càng lớn => W
	return 0;
}

