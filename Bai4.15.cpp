/*
Cho một mảng n số nguyên tùy ý.Bạn hãy chỉ ra dãy tăng hoặc giảm liên tiếp dài nhất trong mảng này.
Ví dụ : mảng 1 2 3 0 5 6 7 8 9 4 2 0 3 5 7 8 9 0 có phần in đậm là dãy tăng liên tiếp dài nhất, 
do đó ta được kết quả là : 0 5 6 7 8 9,   0 3 5 7 8 9
*/


#include <iostream>
using namespace std;

void nhapMang(int*, int*);
void hienThi(int*, int, int, bool);
void hienMang(int*, int);
void timViTriTang(int*, int n, int*, int*, int*);
void timViTriGiam(int*, int n, int*, int*, int*);
int timMax(int*, int*, int);
void ketQua(int*, int, int*, int*, int, bool);

int main() {
	int n;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	int arr[100];
	int start[100];
	int end[100];
	int count = 0;
	nhapMang(arr, &n);
	hienMang(arr, n);
	timViTriTang(arr, n, start, end, &count);
	ketQua(arr, n, start, end, count, true);

	timViTriGiam(arr, n, start, end, &count);
	ketQua(arr, n, start, end, count, false);

	return 0;
}

void nhapMang(int* a, int* n) {
	for (size_t i = 0; i < *n; i++)
	{
		cout << "Nhap phan tu arr[" << i << "] = ";
		cin >> a[i];
	}
}

void hienThi(int* arr, int startIndex, int length, bool x) {
	cout << "\nVi tri bat dau: " << startIndex << ", " << "do dai: " << length;

	cout << "\nCac phan tu trong day " << (x ? "tang" : "giam") << " la: ";
	for (size_t i = startIndex; i < startIndex + length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void hienMang(int* arr, int n) {
	cout << "\nMang goc la: ";
	for (size_t i = 0; i < n; i++)
	{
		cout  << arr[i] << " ";
	}
	cout << endl;
}

void timViTriTang(int* arr, int n, int* start, int *end, int* count) {
	int j = 0;
	start[j] = 0;
	for (size_t i = 0; i < n - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			end[j] = i; // kết thúc đường chạy hiện thời
			j++;
			start[j] = i + 1; // start đường mới
		}
	}
	end[j++] = n - 1; // đánh dấu lại vị trí kết thúc của đường chạy cuối cùng
	*count = j; // lưu lại số cặp điểm
}

void timViTriGiam(int* arr, int n, int* start, int* end, int* count) {
	int j = 0;
	start[j] = 0;
	for (size_t i = 0; i < n - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			end[j] = i;
			j++;
			start[j] = i + 1;
		}
	}
	end[j++] = n - 1;
	*count = j;
}

int timMax(int* start, int* end, int n) {
	int max = end[0] - start[0] + 1;
	for (size_t i = 1; i < n; i++) 
	{
		int length = end[i] - start[i] + 1;
		if (length > max)
		{
			max = length; // cập nhật lại max
		}
	}
	return max;
}

void ketQua(int* arr, int n, int* start, int* end, int count, bool x) {
	if (count == n) // mảng có thứ tự giảm dần.
	{
		cout << "\nKhong co day " << (x ? "Tang" : "Giam") << " dai nhat!\n";
	}
	else
	{
		int max = timMax(start, end, count);
		for (size_t i = 0; i < count; i++)
		{
			int len = end[i] - start[i] + 1; // len: độ dài
			if (len == max)
			{
				hienThi(arr, start[i], len, x);
			}
		}
	}
}


