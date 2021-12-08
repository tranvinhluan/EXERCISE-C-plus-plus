//Nhập hai số nguyên dương a và b trong đó a < b. Hãy liệt kê các cặp số nguyên tố
//cùng nhau trong đoạn [a,b]

#include <iostream> 
#include <cmath> 
using namespace std;

bool nguyenTo(int n)
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


int main()
{
	int a, b;
	cout << "Nhap a < b, a > 0: ";
	cin >> a >> b;
	if (a > 0 && b > 0)
	{
		for (size_t i = a; i <= b; i++)
		{
			if (nguyenTo(i))
			{
				cout << i << " ";
			}
		}
	}
	else
	{
		cout << "Nhap a, b la so duong: ";
	}
	return 0;
}
