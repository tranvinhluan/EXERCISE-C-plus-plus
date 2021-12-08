//Nhập vào hai số nguyên dương x, y và in ra màn hình chữ nhật rỗng bằng các dấu *
//kích thước x * y
//ví dụ x = 5, y = 4.


#include<iostream>
using namespace std;
void nhap(int& x, int& y) { // nhập tham chiếu x, y cho phép thay đổi giá trị x, y.
	cout << "Nhap gia tri so duong x, y: ";
	cin >> x >> y;
}

void veHinhChuNhatRong(int x, int y) {
	for (size_t i = 0; i < y; i++) // lặp theo chiều y.
	{
		for (size_t j = 0; j < x; j++)
		{
			if (i == 0 || i == y - 1 || j == 0 || j == x - 1)
			{
				cout << " * ";
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}
}

int main()
{
	int x, y;
	nhap(x, y);
	veHinhChuNhatRong(x, y);
	return 0;
}