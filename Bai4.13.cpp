/*
Nhập vào hai mảng số nguyên arr1 gồm n1 phần tử, arr2 gồm n2 phần tử.
Nhập vào một giá trị k tùy ý.Việc của bạn là chèn mảng arr2 vào vị trí k của mảng arr1.
Hướng dẫn :
Nếu k < 0 chèn arr2 vào đầu arr1.
	Nếu 0 <= k < n1 thì chèn đúng vị trí.
	Nếu k >= n1 thì chèn arr2 vào cuối mảng arr1.
*/

#include <iostream>
using namespace std;
void nhapMang(int*, int*);
int timViTri(int*, int, int);
void hienThi(int*, int);
void chen(int*, int, int*, int, int);
int main()
{
	int a[100];
	int b[100];
	int n, m, k;
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << "Nhap mang a: " << endl;
	nhapMang(a, &n);
	cout << "Nhap so nguyen m: ";
	cin >> m;
	cout << "Nhap mang b: " << endl;
	nhapMang(b, &m);
	cout << "Nhap gia tri k: " << endl;
	cin >> k;
	int v = timViTri(a, n, k);
	cout << "Mang a truoc khi chen: " << endl;
	hienThi(a, n);
	cout << "Mang b: " << endl;
	hienThi(b, m);
	cout << "Mang a sau khi chen: " << endl;
	chen(a, n, b, m, v);
	hienThi(a, m + n);
	return 0;
}
void nhapMang(int* a, int* n) {
	for (size_t i = 0; i < *n; i++)
	{
		cout << "Nhap phan tu arr[" << i << "] = ";
		cin >> a[i];
	}
}
int timViTri(int* a, int n, int k) {
	if (k < 0)
	{
		return 0;
	}
	if (k >= n)
	{
		return n;
	}
	if (0 <= k < n)
	{
		return k;
	}
}
void hienThi(int* a, int n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void chen(int* a, int n, int* b, int m, int k) {
	for (size_t i = n + m - 1; i >= k + m; i--)
	{
		a[i] = a[i - m];
	}
	// gan gia tri mang b vao mang a
	for (size_t i = k; i < k + m; i++) {
		a[i] = b[i - k];
	}
}

//============================================================================================================================================
//CÁCH 2:
//#include <iostream>
//using namespace std;
//int main() {
//	int na, nb, a[100], b[100], k, nc = 0, c[500];
//	cout << "nhap phan tu mang a: ";
//	cin >> na;
//	cout << "nhap mang a: ";
//	for (int i = 0; i < na; i++) {
//		cin >> a[i];
//	}
//	cout << "nhap phan tu mang b: ";
//	cin >> nb;
//	cout << "nhap mang b: ";
//	for (int i = 0; i < nb; i++) {
//		cin >> b[i];
//	}
//	cout << "nhap k: ";
//	cin >> k;
//	if (k < 0) {
//		for (int i = 0; i < nb; i++) {
//			c[nc++] = b[i];
//		}
//		for (int i = 0; i < na; i++) {
//			c[nc++] = a[i];
//		}
//	}
//	else
//		if (0 <= k && k < na) {
//			for (int i = 0; i < na; i++) {
//				if (k == i) {
//					for (int i = 0; i < k; i++) {
//						c[nc++] = a[i];
//					}
//					for (int i = 0; i < nb; i++) {
//						c[nc++] = b[i];
//					}
//					for (int i = k; i < na; i++) {
//						c[nc++] = a[i];
//					}
//				}
//			}
//		}
//		else
//			if (k >= na) {
//				for (int i = 0; i < na; i++) {
//					c[nc++] = a[i];
//				}
//				for (int i = 0; i < nb; i++) {
//					c[nc++] = b[i];
//				}
//			}
//	cout << "mang da chen: ";
//	for (int i = 0; i < nc; i++) {
//		cout << c[i];
//	}
//}

//#include <iostream>
//using namespace std;
//int main() {
//		int a[100];
//		int b[100];
//		int n, m, k;
//		cout << "Nhap so nguyen n: ";
//		cin >> n;
//		cout << "Nhap mang a: " << endl;
//		cout << "Nhap so nguyen m: ";
//		cin >> m;
//		cout << "Nhap mang b: " << endl;
//		cout << "Nhap gia tri k: " << endl;
//		cin >> k;
//	return 0;
//}
//
//void Chen(int* a, int* b, int* temp, int& n1, int& n2, int& ntemp) {
//	int index = 0;
//	int index1 = 0; // Vị trí chèn các phần tử còn lại của mảng a
//	int m = 0;
//	cout << "Nhap vi tri can chen cua mang a: ";
//	cin >> index;
//	if (index < 0) {
//		index = 0;
//	}
//	ntemp = n1 + n2; // Số phần tử của temp = n1 + n2
//	temp = new int[ntemp];
//	if (index >= n1 - 1) { // Trường hợp chèn cuối mảng
//		index = n1 - 1;
//		for (int i = 0; i < n1; i++) {
//			temp[i] = a[i];
//		}
//		for (int i = index + 1; i < ntemp; i++) {
//			temp[i] = b[m++];
//		}
//	}
//	else { // Trường hợp đầu mảng và bất kì
//		for (int i = 0; i < index; i++) {
//			temp[i] = a[i]; // chép mảng a sang temp tới vị trí trước index
//		}
//		int k = index; // Bắt đầu chép mảng b sang temp tại vị trí index
//		while (m < n2) {
//			temp[k] = b[m];
//			k++;
//			m++;
//		}
//		index1 = index;
//		// Chép phần còn lại của a vào temp
//		for (int i = index + n2; i < ntemp; i++) {
//			temp[i] = a[index1++];
//		}
//	}
//}
