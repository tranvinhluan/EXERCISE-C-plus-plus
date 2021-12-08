//Nhập một số thực c > 0 ( ví dụ c = 0.0001 ) rồi tính số Pi theo công thức:
//PI = 4*(1-1/3+1/5-1/7+...+(-1)^n.1/(2n+1))
//Tổng được tính với n đủ lớn đến khi bất đằng thức 1/(2n+1) >= c còn thỏa mãn.
//So sánh với giá trị PI có sẵn trong thư viện C++.

#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	double c;
	cout << "Nhap so c = ";
	cin >> c;

	long n = 0;
	int ex = 1; // biểu hiện số mũ.

	double res = 0;

	double tmp = 1 / (2.0 * n + 1); // tạm thời: tmp và đưa về số thực.

	while (tmp >= c)
	{
		res += ex*tmp;
		ex *= -1;
		n++;
		tmp = 1 / (2.0 * n + 1);
	}

	double PI = 4 * res;
	cout << "PI = " << PI << endl;

	return 0;
}