/*
	Thao tác với phân số:
a, Tạo struc phân số
b, Viết hàm nhập vào tử số, mẫu số và trả về phân số.
c, Tiến hành rút gọn phân số.
d, Tính tổng và hiệu 2 phân số, viết hàm trả về kết quả là một phân số.
e, Tính tích, thương 2 phân số. Viết hàm trả về kết quả là 1 phân số.
f, Viết menu cho phép người dùng lựa chọn các chức năng tương ứng để thực hiên chương trình

*/

#include <iostream>
using namespace std;

struct PhanSo { // câu a
	int tu;
	int mau;
};

struct PhanSo nhap() {
	PhanSo p;
	cout << "Nhap tu so: ";
	cin >> p.tu;
	while (1)
	{
		cout << "Nhap mau so khac 0: ";
		cin >> p.mau;
		if (p.mau != 0)
		{
			break;
		}
	}
	return p;
}

int ucln(int a, int b) {
	if (a < 0)
	{
		a = a * -1;
	}
	if (b < 0)
	{
		b = b * -1;
	}

	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
}

struct PhanSo rutGon(struct PhanSo p) {
	if (p.tu != 0)
	{
		int u = ucln(p.tu, p.mau);
		p.tu /= u;
		p.mau /= u;
		if ((p.tu < 0 && p.mau < 0) || (p.tu > 0 && p.mau < 0))
		{
			p.tu *= -1;
			p.mau *= -1;
		}
	}
	return p;
}

int bcnn(int a, int b) {
	int u = ucln(a, b);
	return a * b / u;
}

struct PhanSo cong(struct PhanSo a, struct PhanSo b) {
	struct PhanSo tong;
	tong.mau = bcnn(a.mau, b.mau);
	tong.tu = tong.mau / a.mau * a.tu + b.tu * tong.mau / b.mau;
	tong = rutGon(tong);
	return tong;
}

struct PhanSo tru(struct PhanSo a, struct PhanSo b) {
	struct PhanSo hieu;
	hieu.mau = bcnn(a.mau, b.mau);
	hieu.tu = hieu.mau / a.mau * a.tu + b.tu * hieu.mau / b.mau;
	hieu = rutGon(hieu);
	return hieu;
}

struct PhanSo nhan(struct PhanSo a, struct PhanSo b) {
	struct PhanSo tich;
	tich.tu = a.tu * b.tu;
	tich.mau = a.mau * b.mau;
	tich = rutGon(tich);
	return tich;
}

struct PhanSo chia(struct PhanSo a, struct PhanSo b) {
	struct PhanSo thuong;
	thuong.tu = a.tu * b.mau;
	thuong.mau = a.mau * b.tu;
	thuong = rutGon(thuong);
	return thuong;
}

void hienThi(struct PhanSo p) {
	cout << p.tu << "/" << p.mau << endl;
}

int main()
{
	int luaChon;
	struct PhanSo a, b, tong, hieu, tich, thuong;
	do
	{
		cout << "=====MENU====";	// câu f
		cout << "\n1. Nhap vao hai phan so.";
		cout << "\n2. Rut gon hai phan so.";
		cout << "\n3. Cong hai phan so.";
		cout << "\n4. Tru hai phan so.";
		cout << "\n5. Nhan hai phan so.";
		cout << "\n6. Chia hai phan so.";
		cout << "\n0. Thoat chuong trinh.";
		cout << "\nBan chon? \n";
		cin >> luaChon;
		switch (luaChon) {

		case 0:
			break;

		case 1:
			cout << "Nhap phan so thu nhat: \n";
			a = nhap();
			cout << "Nhap phan so thu hai: \n";
			b = nhap();
			cout << "Hai phan so vua nhap: \n";
			hienThi(a);
			hienThi(b);
			break;

		case 2:
			a = rutGon(a);
			b = rutGon(b);
			cout << "Phan so a sau khi rut gon: ";
			hienThi(a);
			cout << "Phan so b sau khi rut gon: ";
			hienThi(b);
			break;

		case 3:
			tong = cong(a, b);
			cout << a.tu << "/" << a.mau << " + " << b.tu << "/" << b.mau 
				<< " = " << tong.tu << "/" << tong.mau;
			cout << endl << endl;
			break;

		case 4:
			hieu = tru(a, b);
			cout << a.tu << "/" << a.mau << " - " << b.tu << "/" << b.mau 
				<< " = " << hieu.tu << "/" << hieu.mau;
			cout << endl << endl;
			break;

		case 5:
			tich = nhan(a, b);
			cout << a.tu << "/" << a.mau << " x " << b.tu << "/" << b.mau 
				<< " = " << tich.tu << "/" << tich.mau;
			cout << endl << endl;
			break;

		case 6:
			thuong = chia(a, b);
			cout << a.tu << "/" << a.mau << " x " << b.tu << "/" << b.mau 
				<< " = " << thuong.tu << "/" << thuong.mau;
			cout << endl << endl;
			break;

		default:
			cout << "Sai chuc nang, vui long chon lai!\n";
			break;
		}

	} while (luaChon);



	//struct PhanSo p = nhap();
	//struct PhanSo q = nhap();
	//struct PhanSo kq = cong(p, q);
	//struct PhanSo hieu = tru(p, q);
	//struct PhanSo tich = nhan(p, q);
	//struct PhanSo thuong = chia(p, q);

	//cout << p.tu << "/" << p.mau << " x " << q.tu << "/" << q.mau // câu e
	//	<< " = " << tich.tu << "/" << tich.mau;
	//cout << endl << endl;
	//cout << p.tu << "/" << p.mau << " / " << q.tu << "/" << q.mau
	//	<< " = " << thuong.tu << "/" << thuong.mau;
	//cout << endl << endl;


	//cout << p.tu << "/" << p.mau << " + " << q.tu << "/" << q.mau // câu d
	//	<< " = " << kq.tu << "/" << kq.mau;
	//cout << endl << endl;
	//cout << p.tu << "/" << p.mau << " - " << q.tu << "/" << q.mau
	//	<< " = " << hieu.tu << "/" << hieu.mau;
	//cout << endl;


	//p = rutGon(p); // câu c

	//cout << p.tu << "/" << p.mau << endl; // câu b

	return 0;
}


