//Viết chương trình cho phép người dùng nhập vào số nguyên n, hãy cho biết số vừa nhập:
//a, Là số chẵn hay lẻ
//b, Là số âm hay số dương
//c, In kết quả ra màn hình.


#include <iostream>
using namespace std;

int main() {

	/*bai 1:
	cout << "hello world!\n";*/

	int n;
	cout << "nhap vao so nguyen n: ";
	cin >> n;
	if (n % 2 == 0) {
		cout << n << " la so chan!" << endl;
	}
	else {
		cout << n << " la so le!" << endl;
	}

	if (n >= 0) {
			cout << n << " la so duong!" << endl;
	}	
	else {
		 cout << n << " la so am!" << endl;
	} 
	


		/*cach 2:
		int n;
		cout << "nhap vao so nguyen n: ";
		cin >> n; 
		string msg;

		msg = (n >= 0 ) ? " la so duong!" : " la so am!";

		cout << n << msg  << endl;

		msg = (n % 2 == 0) ? " la so chan!" : " la so le!";
		cout <<  n << msg << endl;*/

	return 0;
}