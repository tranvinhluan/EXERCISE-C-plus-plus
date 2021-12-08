//Nhập vào số nguyên dương h và in ra màn hình tam giác cân có chiều cao h.
//ví dụ với h = 4 ta có kết quả sau:
//			*
//		  * * *
//		* * * * * 
//	  * * * * * * *

#include <iostream> 
#include <iomanip>
using namespace std;

void veHinhTamGiacDeu(int h)
{
	for (size_t i = 1; i <= h; i++)
	{
		for (size_t j = 1; j <= 2 * h - 1; j++)
		{
			if ((j >= h - i + 1) && (j <= h + i - 1))
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << "\n";
	}
}

int main()
{
	int h;
	cout << "Nhap so duong h: ";
	cin >> h;
	veHinhTamGiacDeu(h);
	return 0;
}
