/*   Nhập vào một số nguyên dương n và một mảng các phần tử là các số nguyên.
		a, Tìm giá trị lớn nhất trong mảng
		b, Tìm giá trị nhỏ nhất trong mảng.
*/


#include <iostream>
using namespace std;

void nhap(int *arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nhap phan tu arr[" << i << "] = ";
		cin >> arr[i];
	}

}

int timMax(int* arr, int n) {
	int max = arr[0];
	for (size_t i = 1; i < n; i++) // vì lấy phần tử đầu tiên max = arr[0] rồi nên i=1.
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int timMin(int* arr, int n) {
	int min = arr[0];
	for (size_t i = 1; i < n; i++) 
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}


int main()
{
	int n; // số phần tử của mảng.
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	int* arr = new int[n]; // sử dụng mảng động.
	nhap(arr, n);
	int max = timMax(arr, n);
	int min = timMin(arr, n);

	cout << "\nMIN = " << min << "\n" << "MAX = " << max << endl;

	return 0;
}
