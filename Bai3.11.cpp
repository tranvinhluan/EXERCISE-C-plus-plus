﻿/*	Hãy liệt kê các số nguyên có từ 6 đến 9 chữ số thỏa mãn:
	a, Là số nguyên tố
	b, Là số thuận nghịch
	c, Không chứa các chữ số chẵn.
*/

#include <iostream> 
#include <cmath>
using namespace std;

bool laSoNguyenTo(int n)
{
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

bool laSoThuanNghich(long n) {
	long m = n;
	long nDao = 0;
	while (n > 0)
	{
		nDao = nDao * 10 + n % 10;
		n /= 10;
	}
	return nDao == m;
}

bool khongChuaChuSoChan(long n) {
	while (n > 0)
	{
		int c = n % 10;
		n /= 10;
		if (c % 2 == 0)
		{
			return false;
		}
	}
	return true;
}


int main() {
	const long START = 100000;
	const long END = 999999999;
	for (long i = START; i <= END; i++)
	{
		if (laSoNguyenTo(i) && laSoThuanNghich(i) && khongChuaChuSoChan(i))
		{
			cout << i << " ";
		}
	}

	return 0;
}
