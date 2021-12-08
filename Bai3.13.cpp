/*	Hãy liệt kê các số nguyên có 9 chữ số thỏa mãn:
	a, Là số thuận nghịch.
	b, Chỉ chứa các chữ số chẵn.
	c, Tổng các chữ số của nó chia hết cho 5.
*/

#include <iostream> 
#include <cmath>
using namespace std;

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

bool  chuaSoChan(long n) {
	while (n > 0)
	{
		int c = n % 10; // hoặc char c cho nhẹ.
		n /= 10;
		if (c % 2 != 0)
		{
			return false;
		}
	}
	return true;
}

bool tongChiaHetCho5(long n) {
	int tongChuSo = 0;
	while (n > 0)
	{
		tongChuSo += n % 10;
		n /= 10;
	}
	return tongChuSo % 5 == 0;
}


int main() {
	for (long i = 200000000; i <= 888888888; i+=2)
	{
		if (chuaSoChan(i) && tongChiaHetCho5(i) &&  laSoThuanNghich(i))
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}