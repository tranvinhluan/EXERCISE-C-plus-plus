/*
	Nhập một mảng n phần tử các số nguyên tùy ý. Nhập thêm một giá trị x.
	Hãy sắp xếp mảng theo thứ tự tăng dần của các phần tử sau đó chèn x vào
	sao cho các phần tử của mảng vẫn giữ nguyên được tính chất sắp xếp.

*/

#include <iostream>
using namespace std;

//void nhap(int*, int);
//void hienThi(int*, int);
//int timViTri(int*, int, int);
//void chen(int*, int, int, int);
//void sapXepTang(int*, int);

int main()
{

	int n;
	cout << "Nhap n > 0: ";
	cin >> n;

	if (n < 0)
	{
		cout << "Vui long nhap n > 0: ";
	}
	else
	{
		int arr[1000];
		nhap(arr, n);
		sapXepTang(arr, n);
		int x;
		cout << "Nhap x: ";
		cin >> x;
		int v = timViTri(arr, n, x);
		chen(arr, n + 1 , v, x);
		hienThi(arr, n);

	}
	return 0;
}

void nhap(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nhap phan tu arr[" << i << "] = ";
		cin >> arr[i];
	}

}

void sapXepTang(int* arr, int n) {
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = n - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(arr[j], arr[j - 1]);
			}
		}
	}
}

int timViTri(int* arr, int n, int x) {
	if (x < arr[0])
	{
		return 0; // tức chèn vị trí đầu tiên.
	}
	if (x > (arr[n-1])) // x lớn hơn phần tử cuối cùng 
	{
		return n; 
	}
	for (size_t i = 0; i < n; i++) 
	{
		if (arr[i] >= x) 
		{
			return i; // trả về vị trí của phần tử này ==> đây là vị trí ta chèn vào.
		}
	}

	// cách 2:
	/*for (size_t i = n - 1; i >= 0; i--)
	{
		if (arr[i] <= x)
		{
			return i + 1;
		}
	}*/

}

void chen(int* arr, int n, int k, int x) {
	for (size_t i = n - 1; i > k; i--) // chèn vị trí thì phải auto dùng i--
	{
		arr[i] = arr[i - 1]; // dịch sang phải tất cả phần tử.
	}
	arr[k] = x; 
	
}

void hienThi(int* arr, int n) {
	for (size_t i = 0; i < n + 1 ; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}




