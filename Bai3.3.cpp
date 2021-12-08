//Nhập vào số nguyên dương h và in ra màn hình tam giác vuông cân đặc có độ cao h.
//	* 
//	* * 
//	* * * 
//	* * * * 
//	* * * * * 

#include<iostream>
using namespace std;

void veHinhTamGiacVuongCan(int h) {
	for (size_t i = 1; i <= h; i++)
	{
		for (size_t j = 1; j <= i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
}

int main()
{
	int h;
	cout << "Nhap so duong h: ";
	cin >> h;
	veHinhTamGiacVuongCan(h);
	return 0;
}