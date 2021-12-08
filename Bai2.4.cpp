//Nhập vào số tự nhiên n rồi tính các tổng sau:
//a, Sn = Tổng các số tự nhiên không lớn hơn n
//b, S1 = Tổng các số tự nhiên lẻ không lớn hơn n.
//c, S2 = Tổng các số tự nhiên chẵn không lớn hơn n.


#include <iostream>
using namespace std;
int main()
{
	int n;
	long sum1 = 0, sum2 = 0, sum3 = 0;
	cout << "\nNhap vao so tu nhien n: ";
	cin >> n;
	if (n < 0)
	{
		cout << "\nVui long nhap vao so tu nhien >= 0: ";
	}
	else
	{
		for (size_t i = 0; i < n; i++)
		{
			sum1 += i;
			if (i % 2 == 0)
			{
				sum2 += i;
			}
			else
			{
				sum3 += i;
			}

		}
		cout << "\nTong cac so tu nhien khong lon hon n: " << sum1 << endl;
		cout << "\nTong cac so tu nhien chan khong lon hon n: " << sum2 << endl;
		cout << "\nTong cac so tu nhien le khong lon hon n: " << sum3 << endl;
	}
	return 0;
}