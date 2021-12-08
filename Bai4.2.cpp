/*	Nhập vào một mảng gồm n số nguyên tùy ý, hãy:
	a, Sắp xếp các phần tử của mảng này theo thứ tự tăng dần
	b, Sắp xếp các phần tử của mảng này theo thứ tự giảm dần.

	==> Sử dụng bubble sort:
	Thuật toán sắp xếp bubble sort thực hiện sắp xếp dãy số bằng cách lặp lại công việc
	đổi chỗ 2 số liên tiếp nhau nếu chúng đứng sai thứ tự
*/

#include <iostream>
using namespace std;

void nhap(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

void hienThi(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sapXepTang(int* arr, int n) {
	for (size_t i = 0 ; i < n-1 ; i++) // phần tử cuối cùng đã được sắp xếp.
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

void sapXepGiam(int* arr, int n) {
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}


int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (n > 0)
	{
		int* arr = new int[n];
		nhap(arr, n);
		cout << endl;
		hienThi(arr, n);

		sapXepTang(arr, n); // cout << " sx" << sapXepTang
		hienThi(arr, n);

		sapXepGiam(arr, n);
		hienThi(arr, n);
	}
	else
	{
		cout << "Nhap n > 0! ";
	}
	return 0;
}

