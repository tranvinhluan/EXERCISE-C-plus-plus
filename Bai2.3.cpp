//Nhập vào số tự nhiên n rồi tính tổng sau:
//S = 1 + 1/2 + 1/3 + ... + 1/n


#include <iostream>
using namespace std;
int main()
{
	int n;
	float sum = 0;
	
	cout << "\nNhap vao so tu nhien: ";
	cin >> n;
	if (n < 0)
	{
		cout << "\nVui long nhap vao so tu nhien >= 0: ";
	}
	else
	{
		for (size_t i = 1; i <= n; i++)
		{
			sum += 1*1.0f / i;
		}
		cout << "Tong: " << sum << endl;
	}

	return 0;
}