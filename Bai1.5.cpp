//Hãy nhập 5 số thực a, b, c, d, e. Tìm giá trị lớn nhất trong 5 số này.
//Trường hợp 5 số bằng nhau thì không có số lớn nhất.
//Nhớ in kết quả ra màn hình nhé.


#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;
	cout << "Nhap vao 5 so thuc:";
	cin >> a >> b >> c >> d >> e;

	float max = a; // gia su a la max

	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	if (e > max) {
		max = e;
	}
	if (a == b && b == c && c == d && d == e) {
		cout << " KHONG CO SO LON NHAT!" << endl;
	}
	else {
		cout << " SO CO GIA TRI LON NHAT LA: " << max << endl;
	}
	
	return 0;
}