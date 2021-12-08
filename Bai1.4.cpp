//Nhập vào hai số tùy ý, hãy:
//a, So sánh hai số
//b, Nhớ in kết quả ra màn hình.


#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Nhap vao hai so nguyen:";
	cin >> a >> b;
	if (a < b) {
		cout <<   a  << " < " <<  b  << endl;
	}
	else if (a == b) {
		cout << a << " = " << b << endl;
	}
	else {
		cout << a << " > " << b << endl;
	}

	return 0;
}