//Bài 2.16 cách 2 sử dụng hàm Pow

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double c, PI = 0.0f;
	cout << "nhap 1 so thuc c = ";
	cin >> c;
	for (int i = 0;; i++) {
		PI += 1 * (pow((-1), i)) * (1 / (2.0 * i + 1));
		if ((1 / (2.0 * i + 1)) < c) break;
	}
	cout << 4.0 * PI << endl;
	return 0;
}