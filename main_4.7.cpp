/*	Nhập vào một mảng gồm n giá trị số nguyên.
	Kiểm tra xem mảng của bạn có đối xứng hay không?
	Mảng đối xứng là mảng đọc xuôi hay ngược đều cho cùng một dãy số duy nhất.
	ví dụ: Mảng gồm các phần tử 1 2 3 3 4 3 3 2 1 là mảng đối xứng.
		   Mảng 1 2 3 1 không đối xứng.
*/

#include <iostream>
#include <fstream>
#include "Bai4.7.h"
using namespace std;

int main() {
	ifstream ifs("Bai4.7.txt");
	size_t n;
	ifs >> n;
	int* arr = new int[n]; // tạo 1 hàm với n numbers.
	getInputFromFile(arr, n, ifs);

	if (check(arr, n))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	ifs.close();
	return 0;
}