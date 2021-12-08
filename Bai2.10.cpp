//Hãy phân tích một số nguyên thành các thừa số nguyên tố.

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	int i = 2;
	while (n != 1) 
	{
		if (n % i == 0) 
		{
			cout << i;
			if (n != i)
			{
				cout << " x ";
			}
			n /= i;
		}
		else
		{
			i++;
		}
	}
	return 0;
}


//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout << "\nNhap n = ";
//	cin >> n;
//	int dem;
//
//	for (int i = 2; i <= n; i++)
//	{
//		dem = 0;
//		while (n % i == 0) {
//			dem++;
//			n /= i;
//		}
//		if (dem) {
//			cout << i;
//			if (dem > 1) cout << "^" << dem;
//			if (n > i) {
//				cout << " * ";
//			}
//		}
//	}
//	return 0;
//}
