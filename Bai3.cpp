//Nhập vào hai số nguyên dương x, y và in ra màn hình chữ nhật bằng các dấu *
//kích thước x * y
//ví dụ x = 5, y = 4.


#include<iostream>
using namespace std;
void nhap(int &x, int &y) { // cho phép thay đổi giá trị x và y.
	cout << "Nhap gia tri so duong x, y: ";
	cin >> x >> y;
}

void veHinhChuNhat(int x, int y) {
	for (size_t i = 0; i < y; i++) // lặp theo chiều y.
	{
		for (size_t j = 0; j < x; j++)
		{
			cout << "  " << "+" << " ";
		}
		cout << endl;
	}
}

int main()
{
	int x, y;
	nhap(x, y);
	veHinhChuNhat(x, y);
	return 0;
}