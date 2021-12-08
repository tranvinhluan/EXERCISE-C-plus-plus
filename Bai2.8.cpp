//Viết chương trình C++ tìm UCLN và BCNN của hai số nguyên dương nhập vào từ bàn phím.

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	int tich = 1;

	cout << "Nhap vao hai so duong a, b: ";
	cin >> a >> b;
	
	if (a > 0 && b > 0)
	{
		tich = a * b;

		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		cout << "UCLN = " << a << endl; // hoặc b, a = b.
		cout << "BCNN = " << tich / a << endl;
		// UCLN(a,b) = a.b / BCNN(a,b)
	}
	else
	{
		cout << "Vui long nhap so nguyen duong a, b\n ";
	}
	return 0;
}