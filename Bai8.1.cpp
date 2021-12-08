/*
Lớp Person gồm các thông tin : mã là số nguyên tự tăng từ 100, họ, đệm,
tên, tuổi, giới tính, địa chỉ, số điện thoại.Hãy thực hiện các yêu cầu sau :
1) Khai báo class Person với các thông tin private như trên.
2) Viết hàm tạo mặc định khởi tạo các giá trị ban đầu mặc định theo kiểu đã
chọn của các thuộc tính.
3) Viết hàm tạo đầy đủ tham số và gán các thông tin qua phương thức set
tương ứng.
4) Viết các cặp phương thức get / set ứng với từng thuộc tính.
5) Viết phương thức showInfo() hiển thị thông tin của từng đối tượng Person.
6) Viết phương thức fullName() trả về đầy đủ họ tên của mỗi Person.
7) Lập danh sách các Person, thêm các Person vào danh sách.
8) Hiện lên màn hình danh sách các Person đã tạo.
*/

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

void getPersonInfo(Person* ps, size_t n) { // truyền vào mảng person ps.
	int age;
	string first, last, mid, addr, phone, gender;
	for (size_t i = 0; i < n; i++)
	{
		cout << "First Name: ";
		cin >> first;
		cout << "Last Name: ";
		cin >> last;
		cout << "Middle Name: ";
		cin.ignore();
		getline(cin, mid); 
		// trước khi getline ta cần cin.ignore để ko nhận thông tin đã đọc.
		cout << "Address: ";
		getline(cin, addr);
		cout << "Gender: ";
		cin >> gender;
		cout << "Phone number: ";
		cin >> phone;
		cout << "Age: ";
		cin >> age;
		cout << endl;
		// Tạo đối tượng Person p.
		Person p(0, age, first, last, mid, gender, addr, phone);
		ps[i] = p;
	}
}

void showInfo(Person* ps, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		ps[i].showInfo();
	}
}

int main() {
	Person* people;
	size_t N;
	cout << "Enter the number of people: (N > 0) ";
	cin >> N;
	people = new Person[N]; // cấp phát động N phần tử

	//Nhập dữ liệu
	getPersonInfo(people, N);

	// Hiển thị danh sách các person len màn hình.
	showInfo(people, N);

	return 0;
}



