//Nhập số tự nhiên n và thực hiện:
//a, Liệt kê các ước số của nó
//b, Đếm xem số đó có bao nhiêu ước số?

#include <iostream>
using namespace std;
int main()
{
	int n;
	int demUoc = 0;
	cout << "\nNhap vao so tu nhien n: ";
	cin >> n;

	if (n <0 )
	{
		cout << "\nVui long nhap so tu nhien n > 0 ";
	}
	else
	{
		for (size_t i = 1; i <= n; i++)
		{
			if (n % i == 0)
			{
				cout << i << " ";
				demUoc++;
			}
		}
		cout << endl;
		cout << "So uoc cua n: " << demUoc << endl;
	}
	
	return 0;
}