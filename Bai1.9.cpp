//Giải và biện luận phương trình bậc 2 ax^2 + bx + c = 0.

#include <iostream>
using namespace std;
#include <cmath> // thư viện hỗ trợ dùng các hàm toán học
int main() {
	float a, b, c;
	cout << "\nNhap he so a, b, c: ";
	cin >> a >> b >> c;

	if (a == 0)
	{
		// trở về pt bậc nhất: bx + c = o
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "\nPhuong trinh vo so nghiem";
			}
			else // <=> if (c !=0)
			{
				cout << "\nPhuong trinh vo nghiem";
			}
		}
		else // <=> if (b !=0)
		{
			cout << "\nPhuong trinh co nghiem: " << -c / b;
		}
	}
	else // <=> if (a!=0)
	{
		float delta = (b * b) - (4 * a * c); // tính delta

		//kiểm tra các trường hợp của delta
		if (delta == 0)
		{
			cout << "\nPhuong trinh co nghiem kep: " << -b / 2 * a;
		}
		else if (delta < 0)
		{
			cout << "\nPhuong trinh vo nghiem";
		}
		else // trường hợp còn lại - delta > 0
		{
			cout << "\nPhuong trinh co 2 nghiem phan biet: ";
			cout << "\nx1: " << (-b + sqrt(delta)) / (2 * a);
			cout << "\nx2: " << (-b - sqrt(delta)) / (2 * a);
		}
	}

	return 0;
}