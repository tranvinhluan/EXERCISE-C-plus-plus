/*
Ex3 : Tính giá trị trung bình của mảng các phần tử kiểu số.
*/

#include <iostream>
using namespace std;
template <class T> double findMediumNumber (T* arr, size_t n) {
	T sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	if (n > 0)
	{
		return 1.0 * sum / n;
	}
	else
	{
		return 0; // kiểm tra n khác 0 vì đây là phép chia.
	}
}

int main() {
	int arrOfInt[] = { 1, 2, 6, 9, 7, 5, 2, 3, 4, 0, -7 };
	double arrOfDouble[] = { 1.2, 5.4, 1.02, 6.98, 77.84, 9.12, 5.112, 4.35, 6.89 };
	
	double mInt = findMediumNumber<int>(arrOfInt, sizeof(arrOfInt) / sizeof(int));
	double mDouble = findMediumNumber<double>(arrOfDouble, sizeof(arrOfDouble) / sizeof(double));

	cout << "Average cua mang int: " << mInt << endl;
	cout << "Average cua mang Double: " << mDouble << endl;
	return 0;
}
