//Nhập vào hai số nguyên bất kì. Tính và in ra màn hình kết quả các phép tính:
//a, Tổng
//b, Hiệu
//c, Tích
//d, Thương.

#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Nhap hai so nguyen:";
	cin >> a >> b;
	
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	return 0;
}