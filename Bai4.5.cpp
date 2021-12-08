/*	Cho một mảng số thực gồm n phần tử được nhập tùy ý từ bàn phím hoặc từ file.
	Hãy tính trung bình cộng các phần tử trong mảng.
*/

#include <iostream>
using namespace std;

void getUserInput(double*, int);
double calcuResult(double*, int);

int main()
{
	int n;
	cout << "Nhap n > 0: ";
	cin >> n;
	if (n > 0) {
		double* arr = new double[n];
		getUserInput(arr, n);
		double res = calcuResult(arr, n);
		cout << endl << "TRUNG BINH CONG = " << res << endl;
	}
	else
	{
		cout << "Nhap n > 0!";
	}
	return 0;
}

void getUserInput(double* arr, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
}

double calcuResult(double* arr, int n) {
	double sum = 0;
	for (size_t i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n; // tính trung bình cộng.
}