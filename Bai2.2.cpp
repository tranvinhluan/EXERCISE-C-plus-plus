//Nhập số tự nhiên n sau đó tính tổng:
//S = 1 + 2 + ... + n

#include <iostream>
using namespace std;
int main()
{
	int n;
	long sum = 0;
	cout << "\nNhap vao so tu nhien: ";
	cin >> n;
	if (n <= 0)
	{
		cout << "\nVui long nhap vao so tu nhien > 0 : ";
	}
	else
	{
		/*for (size_t i = 1; i <= n; i++)
		{
			sum += i;
		}*/

		sum = (n + 1) * n / 2;
		cout << "Tong: " << sum << endl;
	}

	return 0;
}