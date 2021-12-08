/*	Cho một mảng gồm n số nguyên tùy ý nhập từ file hoặc nhập từ bàn phím.
	Nhập thêm giá trị x nào đó(từ file hoặc từ bàn phím).
	Hãy tìm phần tử có giá trị gần sát với x nhất ở trong mảng.
*/

#include < iostream>
#include <fstream>
#include "Bai4.9.h"
using namespace std;

int main() {
	ifstream ifs("Bai4.9.txt");
	int x;
	int* arr;
	size_t n;
	ifs >> n >> x;
	arr = new int[n];
	getInputFromFile(arr, n, ifs);
	int result = findResult(arr, n, x);

	cout << "RESULT: " << result << endl;

	ifs.close();
	return 0;
}