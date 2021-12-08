/*	Nhập vào một số nguyên dương n.
	Hãy sinh ngẫu nhiên một mảng gồm n phần tử các số nguyên và in mảng đó ra màn hình.
*/
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

void nhap(int*, int);
void xuat(int*, int);
bool chuaXH(int*, int, int);

int main()
{
	int n;
	cout << "Nhap n > 0: ";
	cin >> n;
	if (n < 0)
	{
		cout << "Vui long nhap n > 0: ";
	}
	else
	{
		int arr[1000];
		nhap(arr, n);
		xuat(arr, n);
	}
	return 0;
}

void nhap(int* arr, int n) {
	int i = 0;
	srand(time(0)); // Hàm srand() nhận vào một đối số kiểu số nguyên không dấu
					// Những số ngẫu nhiên này sẽ được lấy ra bởi hàm rand().
	while (i < n)
	{
		int x = rand(); // Hàm rand() trả về 1 số nguyên ngẫu nhiên từ 0 -> RAND_MAX = 32767
		if (chuaXH(arr, i, x))
		{
			arr[i++] = x;
		}
	}
}

void xuat(int* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool chuaXH(int* arr, int n, int x) {
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == x)
		{
			return false;
		}
	}
	return true;
}