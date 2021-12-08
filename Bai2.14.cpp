// Nhập vào số tự nhiên n rồi tính n!:
// n! = 1 với n = 0
// n! = n*(n-1)*(n-2)*...*2*1 nếu n > 0

#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int giaiThua = 1;
	if (n > 0)
	{
		for (size_t i = n; i >= 1; i--) // hoặc i = 1; i <= n; i++
		{
			giaiThua *= i;
		}
		cout << n << "! = " << giaiThua << endl;
	}
	else
	{
		cout << "Nhap lai n >= 0! ";
	}
	return 0;
} 