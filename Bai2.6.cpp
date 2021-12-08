//Nhập hai số tự nhiên n, k rồi tính tổng các số tự nhiên không lớn hơn n 
//và chia hết cho k.


#include <iostream>
using namespace std;
int main()
{
	int n, k;
	long sum = 0;
	cout << "\nNhap vao so tu nhien n và k: ";
	cin >> n >> k;

	if (n >= 0 && k > 0)
	{
		for (size_t i = 0; i < n; i++)
		{
			if (i % k == 0)
			{
				sum += i;
			}

		}
		cout << "SUM = " << sum << endl;
	}
	else
	{
		cout << "\nVui long nhap so tu nhien n >= 0 và k > 0 ";
	}
	return 0;
}