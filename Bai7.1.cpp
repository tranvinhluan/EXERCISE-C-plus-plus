/* 
Ex1: Tìm giá trị lớn nhất trong ba số của kiểu số bất kì.
Ex2 : Tìm giá trị lớn nhất trong một mảng các giá trị kiểu số.
Ex3 : Tính giá trị trung bình của mảng các phần tử kiểu số.
Ex4 : Tìm giá trị lớn thứ hai trong mảng các giá trị kiểu số.
Ex5 : Tìm giá trị nhỏ thứ hai trong mảng các giá trị kiểu số.
Ex6 : Tìm giá trị lớn nhất trên cột cho trước của một ma trận cấp MxN.
Ex7 : Tìm giá trị nhỏ nhất trên một hàng cho trước của ma trận cấp MxN.
Ex8 : Tìm giá trị nhỏ nhất trên hàng chứa nó và lớn nhất trên cột chứa nó trong ma
trận cấp MxN.
Ex9 : Tìm giá trị lớn thứ hai trên cột chứa nó và nhỏ thứ hai trên hàng chứa nó.
Ex10 : Sắp xếp mảng các phần tử cho trước theo thứ tự tăng dần.
Ex11 : Hiển thị danh sách mảng cho trước ra màn hình.
*/

#include <iostream>
using namespace std;

// T viết tắt của type.
template <class T> T GTLN(T a1, T a2, T a3) {
	T res = a1;
	if (a2 > res)
	{
		res = a2;
	}
	if (a3 > res)
	{
		res = a3;
	}

	return res;
}

int main() {
	int maxInt;
	float maxFloat;
	long maxLong;

	maxInt = GTLN<int>(1, 6, 9);
	maxFloat = GTLN<float>(2.56f, 9.36f, 4.76f);
	maxLong = GTLN<long>(2334252552, 52525252, 156295595);

	cout << "Max int: " << maxInt << endl;
	cout << "Max float: " << maxFloat << endl;
	cout << "Max long: " << maxLong << endl;

	return 0;
}

