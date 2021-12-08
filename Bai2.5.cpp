//Nhập số nguyên dương n và tính: 
//S = 1 + 1.2 + 1.2.3 +....+ 1.2.3...n


#include <iostream>
using namespace std;
int main()
{
	int n;
	long long sum = 0;
	cout << "\nNhap vao so tu nhien n: ";
	cin >> n;
	long long x = 1;
	if (n > 0)
	{
		for (size_t i = 1; i <= n; i++)
		{
			x *= i; // tính i!
			sum += x; // cong i! vao tong
		}
		cout << "SUM = " << sum << endl;
	}
	else
	{
		cout << "\nVui long nhap so tu nhien > 0 ";
	}
	return 0;
}