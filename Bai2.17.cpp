//Nhập một số c > 0 ( ví dụ c = 0.0001 ) và một số thực x rồi tính:
//e^x = 1 + x/1! + x^2/2! +....+ x^n/n!
//Tổng được tính với n đủ lớn sao cho bất đằng thức |x^n/n!| <= c thỏa mãn.
//So sánh với giá trị e^x của bạn với giá trị e^x trong thư viện C++.


#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	double c, x;
	long n = 0; 
	double res = 0;
	double tu = 1;
	long long	mau = 1;
	double tmp = tu / mau;

	cout << "Nhap so c = ";
	cin >> c;

	cout << "Nhap so x = ";
	cin >> x;
	
	while (tmp >= c)
	{
		res += tmp; 
		n++;
		tu *= x;
		mau *= n;
		tmp = tu / mau;
	}

	cout << "e^x = " << res << endl;
	return 0;
}

