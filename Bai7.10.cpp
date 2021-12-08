/*
Ex10 : Sắp xếp mảng các phần tử cho trước theo thứ tự tăng dần.
*/

#include <iostream>
using namespace std;

template<class T> T sapXep(T* arr, size_t n) {
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[j], arr[i]);
			}
		}
	}

	return 0;
}

template <class T> void hienThi(T* arr, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}


int main() {
	int arr[] = { 1, 2, 6, 9, 7, 5, 2, 3, 4, 0, -7, 11 };

	sapXep<int>(arr, sizeof(arr) / sizeof(int));
	hienThi<int>(arr, sizeof(arr) / sizeof(int));
	return 0;
}


