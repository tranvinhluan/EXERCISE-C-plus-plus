/*	Nhập vào một mảng số nguyên tùy ý và một giá trị nguyên x bất kì.
	Hãy tìm số lần xuất hiện của x trong mảng của bạn.
*/

#include <iostream>
using namespace std;

void nhap(int*, int); 

int demX(int*, int, int);

int main()
{
	int n, x;
	cout << "Nhap gia tri n>  0: ";
	cin >> n;
	if (n > 0)
	{
		int* arr = new int[n];
		nhap(arr, n);
		cout << "Nhap x: ";
		cin >> x;
		int dem = demX(arr, n, x);
		cout << "SO LAN XUA HIEN CUA " << x << " : " << dem << endl;
	}
	else
	{
		cout << "Nhap  n > 0 ";
	}
	return 0;
}

void nhap(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

}
	

int demX(int* arr, int n, int x) {
	int dem = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			dem++;
		}
	}
	return dem;
}