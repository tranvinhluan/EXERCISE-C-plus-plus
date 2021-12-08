/*
Nhập vào một mảng số nguyên tùy ý gồm n > 0 phần tử. Hãy cho biết:
a)	Số lần xuất hiện của từng phần tử trong mảng và
b)	Chỉ ra phần tử nào xuất hiện nhiều nhất,
c)	Phần tử nào xuất hiện ít nhất.
Lưu ý: mỗi giá trị của mảng chỉ liệt kê một lần.
*/

#include <iostream>
using namespace std;
#define MAX 100

// hàm nhập mảng
void Nhap_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap gia tri a[" << i << "] = ";
		cin >> a[i];
	}
}

// hàm xuất mảng
void Xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

// hàm đi tìm phần tử phân biệt
void Tim_Phan_Tu_Phan_Biet(int a[], int b[], int n, int& m)
{
	m = 0;
	b[m] = a[0]; // phần tử đầu tiên của mảng a chính là phần tử phân biệt
	m++; // số lượng phần tử mảng b tăng lên 1 đơn vị

	// vòng lặp duyệt từng phần tử của mảng a
	for (int i = 1; i < n; i++)
	{
		// duyệt từng phần tử của mảng a, duyệt từ vị trí i - 1 đến 0
		// <=> duyệt từ vị trí i-1 về đầu mảng, để tìm xem a[i] trước đó có tồn tại hay chưa
		// nếu a[i] mà duyệt về trước đó mà chưa có tồn tại thì a[i] chính là phần tử phân biệt
		bool Kiem_Tra = true; // giả sử a[i] sẽ là phần tử phân biệt
		for (int j = i - 1; j >= 0; j--) // dịch chuyển về đầu mảng.
		{
			// nếu a[i] bằng a[j] <=> a[i] đã có tồn tại trước đó 
			if (a[i] == a[j])
			{
				Kiem_Tra = false; // cập nhật lại a[i] không phải là phần tử phân biệt
				break; // dừng việc kiểm tra
			}
		}
		if (Kiem_Tra == true)
		{
			b[m] = a[i]; // đưa phần tử phân biệt vào mảng b
			m++; // số lượng phần tử mảng b tăng lên 1 đơn vị
		}
	}
}

// hàm đếm số lần xuất hiện của từng phần tử phân biệt
void Xu_Li(int a[], int b[], int n, int& m)
{
	// BƯỚC 1: ĐI TÌM PHẦN TỬ PHÂN BIỆT
	Tim_Phan_Tu_Phan_Biet(a, b, n, m);

	// BƯỚC 2: ĐI TÌM SỐ LẦN XUẤT HIỆN CỦA TỪNG PHẦN TỬ PHÂN BIỆT TRONG MẢNG A

	// vòng lặp lấy từng phần tử của mảng b- mảng chứa phần tử phân biệt
	// để duyệt với toàn bộ mảng a <=> duyệt với vòng lặp for bên trong
	for (int i = 0; i < m; i++) // duyệt mảng a, nghĩa là lấy từng phần tử mảng b duyệt vs a.
	{
		int dem = 0;
		// duyệt từng phần tử của mảng b với toàn bộ mảng a để tìm số lần xuất hiện
		for (int j = 0; j < n; j++) // duyệt mảng b
		{
			if (b[i] == a[j])
			{
				dem++; // số lần xuất hiện của phần tử b[i] tăng lên 1 
			}
		}
		cout << "\nPhan tu " << b[i] << " xuat hien: " << dem << " lan";
	}
}

int main()
{
	int n; // số lượng phần tử mảng a
	int m;// số lượng phần tử mảng b
	int a[MAX];
	int b[MAX];// mảng b chính là mảng phụ chứa các phần tử phân biệt của mảng a

	cout << "\nNhap so luong phan tu mang: ";
	cin >> n;
	cout << "\n\tNHAP MANG A\n";
	Nhap_Mang(a, n);
	cout << "\n\tXUAT MANG A\n";
	Xuat_Mang(a, n);

	// gọi lại hàm xử lí - để đếm số lần xuất hiện của từng phần tử phân biệt

	Xu_Li(a, b, n, m);

	system("pause");
	return 0;
}


