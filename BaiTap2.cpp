//Nhập vào số tự nhiên n sau đó tìm và in ra:
//a, Các số chẵn nhỏ hơn n và 
//b, Các số lẻ nhỏ hơn n.


#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "\nNhap vao so tu nhien: ";
	cin >> n;
	if (n < 0)
	{
		cout << "\nVui long nhap vao so tu nhien >= 0: ";
	}
	else
	{
		cout << "\nSo chan nho hon n: ";
		for (int i = 0; i < n; i +=2)
		{
			cout << i << " ";
		}
		cout << endl;
		cout << "\nSo le nho hon n: ";
		for (int i = 1; i < n; i +=2)
		{
			cout << i << " ";
		}
		
	}

	return 0;
}