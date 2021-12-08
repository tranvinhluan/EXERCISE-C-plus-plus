/*	Viết chương trình nhập vào một mảng gồm n phần tử ( bàn phím hoặc từ file)
	các số nguyên tùy ý.
	Nhập thêm số nguyên k tùy ý.
	Hãy tính trung bình cộng các số nguyên tố hoặc số chia hết cho k.
*/

#include <iostream>
#include <fstream>
#include "Bai4.6.h"
using namespace std;

int main() {
	ifstream ifs("Bai4.6.txt");

	int k;
	size_t n;

	ifs >> n >> k;

	int* arr = new int[n];

	getInput(arr, n, ifs); // doc du lieu cho mang

	int sum = 0, count = 0;
	for (size_t i = 0; i < n; i++)
	{
		int x = arr[i];
		if (checkDivK(x, k) || checkNt(x)) {
			count++;
			sum += x;
		}
	}

	float result = getMidValue(sum, count);

	cout << "KQ = " << result << endl;

	return 0;
}

