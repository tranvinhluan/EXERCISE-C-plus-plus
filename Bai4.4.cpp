/*	Nhập vào một mảng số thực tùy ý. Hãy tìm:
	a, Giá trị lớn thứ hai và vị trí của nó trong mảng và
	b, Giá trị nhỏ thứ hai và vị trí của nó trong mảng vừa nhập.
*/

#include <iostream>
using namespace std;


void input(int*, int);
int findMax(int*, int);
int findMin(int*, int);
int findSecondMax(int*, int, int);
int findSecondMin(int*, int, int);
void result(int*, int, int);


int main()
{
	int n;
	cout << "Nhap n > 0: ";
	cin >> n;
	if (n > 0)
	{
		int* arr = new int[n];
		input(arr, n);
		int max = findMax(arr, n);
		int min = findMin(arr, n);
		if (min == max)
		{
			cout << "\nKHONG CÓ GIA TRI LON THU HAI VA NHO THU HAI";
		}
		else
		{
			int seMax = findSecondMax(arr, n, max);
			int seMin = findSecondMin(arr, n, min);
			// hien thi ket qua
			cout << "\nGia tri lon thu hai: " << seMax << endl;
			result(arr, n, seMax);
			cout << "\nGia tri nho thu hai: " << seMin << endl;
			result(arr, n, seMin);
		}
	}
	else
	{
		cout << "Nhap n > 0!";
	}
	return 0;
}


void result(int* arr, int n, int m) {
	cout << "Vi tri cac phan tu: ";
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == m)
		{
			cout << i << " , ";
		}
	}
	cout << endl;
}

void input(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

int findMax(int* arr, int n) {
	int max = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	return max;
}

int findMin(int* arr, int n) {
	int min = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	return min;
}

int findSecondMin(int* arr, int n, int min)
{
	int seMin = 0;
	// khơi tạo seMin đảm bảo khác min.
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != min)
		{
			seMin = arr[i];
			break; 
		}
	}

	// tìm gia tri nho thu hai
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != min && arr[i] < seMin)
		{
			seMin = arr[i];
		}
	}
	return seMin; 
}


int findSecondMax(int* arr, int n, int max) {
	int seMax = 0;
	// khơi tạo seMin đảm bảo khác min.
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != max)
		{
			seMax = arr[i];
			break;
		}
	}

	// tìm gia tri lon thu hai
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] != max && arr[i] > seMax)
		{
			seMax = arr[i];
		}
	}
	return seMax; 
}