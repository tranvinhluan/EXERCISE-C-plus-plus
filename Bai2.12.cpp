//0 và 1 hoặc 1 và 1, các phần tử sau đó được thiết lập theo quy tắc mỗi
//phần tử luôn bằng tổng 2 phần tử trước nó.
//F(0)= 0, f(1)= 1, F(n>=2) = F(n-2) + F(n-1)

#include <cmath>			
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	if (n < 0)
	{
		cout << "Vui long nhap so duong n! " << endl;
	}
	else
	{
		if (n == 0) 
		{
			cout << "0" << endl;
		} 
		if (n == 1)      
		{
			cout << "1" << endl; 
		}
		if (n >= 2)
		{
			long long fn, f0 = 0, f1 = 1;
			for (size_t i = 2; i <= n; i++) 
			{
				fn = f0 + f1;	// tính fn trước
				f0 = f1;		//F(n-2) - cập nhật lại 
				f1 = fn;		//F(n-1) - cập nhật lại
			}
			cout << fn << endl;
		}   
	}  
	return 0;
}
 