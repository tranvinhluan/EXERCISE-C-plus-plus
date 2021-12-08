//Hãy liệt kê các số thuận nghịch có 8 chữ số mà tổng các chữ số của nó chia hết 
//cho số nguyên dương k nhập từ bàn phím.

#include <iostream> 
using namespace std;

void nhap(int &k) // cho phép tham chiếu.
{
	cout << "Nhap gia tri duong k (0< k <= 72): ";
	cin >> k;
}

bool thuanNghich(int n)
{
	int m = n;
	int dao = 0;
	while (n > 0)
	{
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	return dao == m;
}

bool chiaHetChoK(int n, int k)
{
	int tongChuSo = 0;
	while (n > 0)
	{
		tongChuSo += n % 10;
		n /= 10;
	}
	return tongChuSo % k == 0;
}


int main()
{
	int k;
	nhap(k);
	if (k <= 0 || k > 72)
	{
		cout << "Nhap lai gia tri so duong k(0 < k <= 72): ";
	}
	else
	{
		cout << "Cac gia tri co 8 chu so chia het cho " << k << " :\n";
		for (size_t i = 10000000; i <= 99999999; i++)
		{
			if (thuanNghich(i) && chiaHetChoK(i, k))
			{
				cout << i << " ";
			}
		}
	}
	return 0;
}
