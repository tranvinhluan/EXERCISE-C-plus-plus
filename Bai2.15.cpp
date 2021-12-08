//Hãy viết chương trình tính tổng các chữ số  của một số nguyên bất kỳ.
//Ví dụ: số 1234 có tổng các chữ số là: 1 + 2 + 3 + 4 = 10.


#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
	long long n;
	cout << "Nhap so n: ";
	cin >> n;

	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	cout << "SUM = " << sum << endl;
	return 0;
}        