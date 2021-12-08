﻿/*	Lập bảng k
			C  (tam giác pascal) theo công thức truy hồi sau:
			 n
			C(0,k) = C(n,n) = 1
			C(k,n) = C(k,n-1) + C(k-1,n-1)
*/

#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;

int pascal(int k, int n) {
	if (k == 0 || k == n)
	{
		return 1;
	}
	else
	{
		return pascal(k, n - 1) + pascal(k - 1, n - 1);
	}
}


int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (size_t i = 0; i <= n; i++)
	{
		for (size_t k = 0; k <= i; k++)
		{
			cout << setw(6) << pascal(k, i);
		}
		cout << endl;
	}

	return 0;
}