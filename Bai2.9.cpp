//Viết chương trình C++ nhập số nguyên tố tùy ý từ bàn phím và kiểm tra 
//số vừa nhập có phải số nguyên tố hay không.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;	//số nguyên tố là số chia hết cho 1 và chính nó.
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (n < 2)
	{
		cout << "Khong phai so nguyen to!" << endl;
	}
	else
	{
		for (size_t i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				cout << "Khong phai so nguyen to!" << endl;
				return 0;
			}
		}
		cout << "La so nguyen to! " << endl;
	}

	return 0;
}