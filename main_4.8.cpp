/*	Cho một file gồm t bộ test, mỗi bộ test ghi trên 2 dòng.
	Dòng thứ nhất là số phần tử của mảng ta kí hiệu là n.
	Dòng thứ hai gồm n phần tử các số nguyên được ghi cách nhau một vài dấu cách. 
	Hãy áp dụng Ex 07 để chỉ ra trong t mảng đó mảng nào đối xứng, mảng nào không đối xứng.
	Kết quả thể hiện trên từng dòng như sau: nếu mảng đối xứng ghi ra YES, ngược lại ghi NO.
*/

#include <iostream>
#include <fstream>
#include "Bai4.7.h"
using namespace std;

int main() {
	ifstream ifs("Bai4.8.txt");
	size_t n; // so phan tu tung mang
	int k; // so bo test
	ifs >> k; // doc so bo test
	while (k > 0) {
		ifs >> n; // doc so phan tu
		int* arr = new int[n]; // create an array with n number

		getInputFromFile(arr, n, ifs); // doc tat ca phan tu cua mang tuong ung

		if (check(arr, n)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		k--;
	}
	ifs.close();
	return 0;
}