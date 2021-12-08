/*	Nhập vào một số nguyên dương n và thực hiện:
	a, Liệt kê các ước số không nguyên tố của n.
	b, Liệt kê các ước số là số nguyên tố của n.
*/

#include <iostream> 
#include <cmath>
using namespace std;

bool kiemTraSoNguyenTo(int n) {
	if (n < 2)
	{
		return false;
	}
		for (size_t i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}

	return true;
}

void uocNguyenTo(int n)
{
	if (n == 0)
	{
		cout << "Co vo so uoc nguyen to\n";
	}
	else
	{
		cout << "\nCAC UOC  NGUYEN TO: \n";
		for (size_t i = 2; i <= n; i++)
		{
			if (n % i == 0 && kiemTraSoNguyenTo(i))  
			{
				cout << i << " ";
			}
		}
	}
	cout << endl;
}

void uocKhongNguyenTo(int n)
{
	if (n == 0)
	{
		cout << "Co vo so uoc nguyen to";
	}
	else
	{
		cout << "\nCAC UOC KHONG NGUYEN TO: \n";
		for (size_t i = 2; i <= n; i++)
		{
			if (n % i == 0 && !kiemTraSoNguyenTo(i)) //hoặc kiemTraSoNguyenTo(i) == false 
			{
				cout << i << " ";
			}
		}
	}
	cout << endl;
}

int main()
{
	int n;
	cout << "Nhap vao gia tri duong n: ";
	cin >> n;
	if (n < 0)
	{
		cout << "Nhap lai so duong n! ";
	}
	else
	{
		uocNguyenTo(n);
		uocKhongNguyenTo(n);
	}
	return 0;
}