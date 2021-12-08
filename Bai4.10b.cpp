/*
Nhập vào một mảng số nguyên tùy ý gồm n > 0 phần tử. Hãy cho biết:
a)	Số lần xuất hiện của từng phần tử trong mảng và
b)	Chỉ ra phần tử nào xuất hiện nhiều nhất,
c)	Phần tử nào xuất hiện ít nhất.
Lưu ý: mỗi giá trị của mảng chỉ liệt kê một lần.
*/

#include <iostream>
using namespace std;

void nhap(int*, int);
void xuat(int*, int);
void phanBiet(int*, int*, int, int &);
void xuLy(int*, int*, int, int &);

int main()
{
	int n;
	int m;
	int a[100];
	int b[100];
	cout << "Nhap n > 0: ";
	cin >> n;
	if (n > 0) {
		int* a = new int[n];
		cout << "\n\tNHAP MANG A\n";
		nhap(a, n);
		cout << "\n\tXUAT MANG A\n";
		xuat(a, n);
		phanBiet(a, b, n, m);
	    xuLy(a, b, n, m); 
	}
	else
	{
		cout << "Nhap n > 0!";
	}
	return 0;
}

void nhap(int* a, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nhap phan tu arr[" << i << "] = ";
		cin >> a[i];
	}
}

void xuat(int* a, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void phanBiet(int* a, int* b, int n, int &m)
{
	m = 0;
	b[m] = a[0]; 
	m++; 
	for (int i = 1; i < n; i++)
	{
		bool Kiem_Tra = true; 
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i] == a[j])
			{
				Kiem_Tra = false; 
				break; 
			}
		}
		if (Kiem_Tra == true)
		{
			b[m] = a[i]; 
			m++;
		}
	}
}

void xuLy(int*a , int*b , int n, int &m)
{
	for (int i = 0; i < m; i++)
	{
		int dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (b[i] == a[j])
			{
				dem++; 
			}
		}
		cout << "\nPhan tu " << b[i] << " xuat hien: " << dem << " lan";
		cout << endl;
	}
}
