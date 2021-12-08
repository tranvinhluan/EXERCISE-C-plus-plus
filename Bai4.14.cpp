/* 
	Nhập vào một mảng nguyên gồm n phần tử tùy ý.
	Hãy kiểm tra xem mảng đó đã được sắp xếp theo thứ tự hay chưa.Nếu có in ra YES.
	Nếu không thì chỉ ra phần tử đầu tiên làm hỏng tính chất sắp xếp của mảng
*/

#include <iostream>
using namespace std;

void nhapMang(int*, int);
int timViTri(int*, int);

int main()
{
	int a[100];
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	nhapMang(a, n);
	timViTri(a, n);

	return 0;
}

void nhapMang(int* a, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nhap phan tu arr[" << i << "] = ";
		cin >> a[i];
	}
}

int timViTri(int* a, int n) {
	for (size_t i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i +1])
		{
			cout << a[i + 1] << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}



