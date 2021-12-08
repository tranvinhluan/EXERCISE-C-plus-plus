/*	Hãy liệt kê các số nguyên có 9 chữ số thỏa mãn.
	a, Là số nguyên tố.
	b, Tất cả các chữ số là số nguyên tố.
	c, Đảo của nó cũng là 1 số nguyên tố.
	d, Tổng các chữ số của nó cũng là số nguyên tố.
*/

#include <iostream> 
#include <cmath>
using namespace std;

bool kiemTraNguyenTo(long n) {
	if (n < 2)
	{
		return false;
	}
	for (long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool cacChuSoLaSoNguyenTo(long n) {
	char c;
	while (n > 0)
	{
		c = n % 10;
		n /= 10;
		if (!kiemTraNguyenTo(c))
		{
			return false;
		}
	}
	return true;
}

bool daoLaSoNguyenTo(long n) {
	long nDao = 0;
	while (n > 0)
	{
		nDao = nDao * 10 + n % 10;
		n /= 10;
	}
	return kiemTraNguyenTo(nDao);
}

bool tongChuSo(long n) {
	int tongChuSo = 0;
	while (n > 0)
	{
		tongChuSo += n % 10;
		n /= 10;
	}
	return kiemTraNguyenTo(tongChuSo);
}



int main() {
	for (long i = 100000001; i <= 999999999; i +=2) // vì trừ 2 thì số nguyên tố đều lẻ.
	{
		if (cacChuSoLaSoNguyenTo(i) && tongChuSo(i)
			&& daoLaSoNguyenTo(i) && cacChuSoLaSoNguyenTo(i))
		{
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}