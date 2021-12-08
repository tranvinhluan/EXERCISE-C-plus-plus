//Viết chương trình nhập vào hai cạnh của hình chữ nhật và tính chu vi và diện tích.

#include <iostream>
using namespace std;
int main() {
	int dai, rong;
	int chuVi, dienTich; 

	cout << "Nhap  vao chieu dai, chieu rong cua hinh chu nhat:" ;
	cin >> dai >> rong; 
	if (dai >= 0 && rong >= 0) {
		chuVi = (dai + rong) * 2;
		dienTich = dai * rong;

		cout << "Chu vi: " << chuVi << endl;
		cout << "Dien tich: " << dienTich << endl;
	}
	else {
		cout << "Chieu dai hoac chieu rong khong hop le!";
	}
	
	return 0;
}