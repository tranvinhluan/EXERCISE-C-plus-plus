// Một số được gọi là số thuận nghịch nếu ta đọc từ trái sang phải hay từ phải hay từ
// phải sang trái, số đó vẫn nhận được một số giống nhau. Hãy viết chương trình nhập 
// một số và kiểm tra xem số đó có phải số thuận nghịch hay không.

#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so n: ";
	cin >> n;
	int tmp = n; // gán n với tmp khi n chưa thay đổi để so sánh.
	int nDao = 0;

	// dao gia tri n -> nDao
	while (n > 0)
	{
		nDao = nDao * 10 + n % 10;
		n /= 10;
	}
	if (tmp == nDao)
		{
			cout << tmp << " la so thuan nghich!" << endl;
		}
	else
		{
			cout << tmp << " khong phai so thuan nghich!" << endl;
		}
	
	return 0;
} 