/*	Hãy liệt kê các số nguyên có 8 chữ số thỏa mãn:
	a, Là số nguyên tố.
	b, Tổng các chữ số của số đó là một số nguyên tố.
	c, Các chữ số từ trái qua phải tạo thành dãy không tăng. 
*/

#include <iostream> 
#include <cmath>
using namespace std;

bool laSoNguyenTo(int n) {
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

bool kiemTraTongChuSoNguyenTo(int n) {
	int tong = 0;
	while (n > 0)
	{
		tong += n % 10;
		n /= 10;
	}
	return laSoNguyenTo(tong);
}

bool kiemTraKhongTang (int n) {
	while (n > 10) // n > 10 vì so sánh 2 phần tử kế tiếp 
	{
		char a, b;	// char là một kiểu dữ liệu đặc biệt, nó vừa là kiểu số nguyên, 
		b = n % 10; // cũng vừa là kiểu ký tự.
		n /= 10;
		a = n % 10;
		if (a < b )
		{
			return false;
		}
	}
	return true;
}


int main() {
	for (size_t i = 10000000; i <= 99999999; i++)
	{
		if ( kiemTraKhongTang(i) && kiemTraTongChuSoNguyenTo(i) && laSoNguyenTo(i))
		{
			cout << i << " ";
		}
	}

	cout << endl;
	return 0;
}