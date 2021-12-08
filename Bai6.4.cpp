/*
Sinh viên gồm các thông tin: Mã sinh viên là số nguyên 4 chữ số, họ và tên đầy đủ, tuổi,
giới tính, điểm. Trong đó họ tên đầy đủ gồm: Họ, đệm, tên. Điểm gồm: điểm toán, văn, anh,
và trung bình 3 môn này. Tạo struct phù hợp mô tả thông tin môn hoc, điểm, thông tin sv.
Viết hàm nhập vào thông tin đầy đủ cho 1 sinh viên và trả về sv vừa nhập.
Hãy tạo mảng 100 sinh viên và thực hiện:
a, Thêm mới sv vào danh sách sv
b, Hiển thị danh sách sv hiện có. Thông tin của mỗi sv phải hiển thị đầy đủ trên 1 dòng.
c, Săp xếp danh sách sv theo tên a -> z.
d, Sắp xếp danh sách sv theo điểm trung bình 3 môn giảm dần.
e, Tìm sv có tên được nhập vào từ bàn phím.
f, Ghi thông tin sv trong danh sách hiện có vào file SV.txt.
g, Viết menu cho phép người dùng thực hiện các tùy chọn.
	Trong đó có chức năng thoát chương trình.
*/

// áp dụng struct, con trỏ, tìm kiếm, sắp xếp
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct SinhVien;
void hienThiDSSV(struct SinhVien*, int);
void hienThiTenCot();

struct HoTen {
	string ho;
	string dem;
	string ten;
};

struct DiemMH {
	float toan;
	float van;
	float anh;
	float tbc;
};

struct SinhVien {
	int ma;
	struct HoTen hoVaTen;
	int tuoi;
	//char gioiTinh[10];
	string gioiTinh;
	struct DiemMH diem;
};

void nhapDiem(struct DiemMH* diem) {
	cout << "Toan: ";
	cin >> diem->toan;
	cout << "Van: ";
	cin >> diem->van;
	cout << "Anh: ";
	cin >> diem->anh;
	diem->tbc = (diem->toan + diem->van + diem->anh) / 3;
}
// ==========================================================================================================================

void nhapHoTen(struct HoTen* ten) {
	cout << "Ho: ";
	cin.ignore();
	//cin.getline(ten->ho, 19);
	getline(cin,ten->ho);
	cout << "Dem: ";			
	cin.ignore();
	//cin.getline(ten->dem, 20);
	getline(cin, ten->dem);
	cout << "Ten: ";
	//cin.getline(ten->dem, 19);
	getline(cin, ten->ten);
}

struct SinhVien nhapSV() {
	struct SinhVien sv;
	cout << "Nhap ma: ";
	cin >> sv.ma;
	nhapHoTen(&sv.hoVaTen);
	cout << "Tuoi: ";
	cin >> sv.tuoi;
	cout << "Gioi tinh: ";
	cin >> sv.gioiTinh;
	nhapDiem(&sv.diem);
	return sv;
}
void hienThiTTSV(struct SinhVien sv) {
	cout << sv.ma << "\t" << left << setw(5) << sv.hoVaTen.ho
		<< "\t" << left << setw(10) << sv.hoVaTen.dem << "\t" << left << setw(10) << sv.hoVaTen.ten
		<< "\t" << left << setw(10) << sv.tuoi << "\t" << left << setw(10) << sv.gioiTinh << "\t"
		<< left << setw(10) << sv.diem.toan << "\t" << left << setw(10) << sv.diem.van << "\t"
		<< left << setw(10) << sv.diem.tbc;
}
// ==========================================================================================================================

void sapXepTheoTen(struct SinhVien* ds, int slsv) {
	for (size_t i = 0; i < slsv - 1; i++)
	{
		for (size_t j = slsv - 1; j > i; j--)
		{
			if (strcmp(ds[j].hoVaTen.ten.c_str(), ds[j - 1].hoVaTen.ten.c_str()) < 0)
			{
				struct SinhVien sv = ds[j];
				ds[j] = ds[j - 1];
				ds[j - 1] = sv;
			}
		}
	}
}

void sapXepTheoDiem(struct SinhVien* ds, int slsv) {

	for (size_t i = 0; i < slsv - 1; i++) {
		for (size_t j = slsv - 1; j > i; j--) {
			if (ds[j].diem.tbc > ds[j - 1].diem.tbc) {
				struct SinhVien sv = ds[j];
				ds[j] = ds[j - 1];
				ds[j - 1] = sv;
			}
		}
	}
}

void timTheoTen(struct SinhVien* ds, int slsv) {
	char ten[20];//can chuyen ve string
	string ten;
	cout << "Nhap ten: ";
	cin >> ten;
	hienThiTenCot();

	int timSV = 0;
	for (size_t i = 0; i < slsv; i++) {
		if (strcmp(ten, ds[i].hoVaTen.ten.c_str()) == 0) {
			hienThiTTSV(ds[i]);
			timSV = 1;
		}
	}
	if (timSV == 0) {
		cout << " Khong co sinh vien" << ten << " trong danh sach!\n";
	}
}
// ==========================================================================================================================

void ghiFile(struct SinhVien* ds, int slsv) {
	char fName[26];
	cout << "Nhap ten file: ";
	cin.getline(fName, 25);

	fstream ofs;
	ofs.open("fName.txt", ios::app);

	for (size_t i = 0; i < slsv; i++)
	{
		struct SinhVien sv = ds[i];
		ofs << sv.ma << "\t" << left << setw(5) << sv.hoVaTen.ho
			<< "\t" << left << setw(10) << sv.hoVaTen.dem << "\t" << left << setw(10) << sv.hoVaTen.ten << "\t" << left << setw(10)
			<< sv.tuoi << "\t" << left << setw(10) << sv.gioiTinh << "\t" << left << setw(10)
			<< sv.diem.toan << "\t" << left << setw(10) << sv.diem.van << "\t"
			<< left << setw(10) << sv.diem.tbc;
	}
	ofs.close();
}

// ==========================================================================================================================


void docFile(struct SinhVien* ds, int &slsv) {//sao lai dung con tro	//code roi qua
	fstream filein;
	filein.open("SV.txt", ios::in);
	//int i = 0;
	//if (filein) {
	//	for (size_t i = 0; i < *slsv; i++) {
	//		struct SinhVien sv;
	//		filein >> sv.ma;
	//		filein.ignore();
	//		getline(filein, sv.hoVaTen.ho, '\t');
	//		getline(filein, sv.hoVaTen.dem, '\t');
	//		getline(filein, sv.hoVaTen.ten, '\t');
	//		filein >> sv.tuoi;
	//		filein.ignore();
	//		getline(filein, sv.gioiTinh, '\t');
	//		//getline(filein, sv.diem.toan, '\t');
	//		filein >> sv.diem.toan;
	//		filein.ignore();
	//		//getline(filein, sv.diem.van, '\t');
	//		filein >> sv.diem.van;
	//		filein.ignore();
	//		//getline(filein, sv.diem.anh, '\t');
	//		filein >> sv.diem.anh;
	//		filein.ignore();
	//		//getline(filein, sv.diem.tbc, '\t');
	//		filein >> sv.diem.tbc;		

	//		ds[i++] = sv;
	//		if (filein.eof()) {
	//			break;
	//		}
	//	}
	//}
	//*slsv = i;
	//cout << *slsv << endl;
	while (!filein.eof()) {
		struct SinhVien sv;
		filein >> sv.ma;
		filein.ignore();
		getline(filein, sv.hoVaTen.ho, '\t');
		getline(filein, sv.hoVaTen.dem, '\t');
		getline(filein, sv.hoVaTen.ten, '\t');
		filein >> sv.tuoi;
		filein.ignore();
		getline(filein, sv.gioiTinh, '\t');

		//getline(filein, sv.diem.toan, '\t');
		filein >> sv.diem.toan;
		filein.ignore();
		//getline(filein, sv.diem.van, '\t');
		filein >> sv.diem.van;
		filein.ignore();
		//getline(filein, sv.diem.anh, '\t');
		filein >> sv.diem.anh;
		filein.ignore();
		//getline(filein, sv.diem.tbc, '\t');
		filein >> sv.diem.tbc;
		ds[slsv++] = sv;
	}
	//cout << slsv << endl;//
	filein.close();

}
// ==========================================================================================================================

void hienThiTenCot() {
	cout << "---------------------------------------------------"
		"----------------------------------------------------------\n";
	cout << "Ma SV" << "\t" << left << setw(5) << "Ho"
		<< "\t" << left << setw(10) << "Dem" << "\t" << left << setw(10) << "Ten" << "\t" << left << setw(10)
		<< "Tuoi" << "\t" << left << setw(10) << "Gioi Tinh" << "\t" << left << setw(10)
		<< "Diem Toan" << "\t" << left << setw(10) << "Diem Van" << "\t"
		<< left << setw(10) << "Diem Anh" << left << setw(10) << "Diem TBC\n";
}

void hienThiDSSV(struct SinhVien* ds, int slsv) {
	hienThiTenCot();
	for (size_t i = 0; i < slsv; i++)
	{
		hienThiTTSV(ds[i]);
	}
	cout << "-----------------------------------------------------------"
		"-------------------------------------------------------------------\n";
}


int main() {
	struct SinhVien dssv[100];
	int slsv = 0;

	//struct SinhVien sv;

	//for (size_t i = 0; i < slsv; i++)
	//{
	//	hienThiTTSV(dssv[i]);
	//}

	//cout << "Ma SV" << "\t" << left << setw(5) << "Ho"
	//	<< "\t" << left << setw(10) << "Dem" << "\t" << left << setw(10) << "Ten" << "\t" << left << setw(10)
	//	<< "Tuoi" << "\t" << left << setw(10) << "Gioi Tinh" << "\t" << left << setw(10)
	//	<< "Diem Toan" << "\t" << left << setw(10) << "Diem Van" << "\t"
	//	<< left << setw(10) << "Diem Anh" << left << setw(10) << "Diem TBC\n";
	//

	//sv = nhapSV();
	//dssv[slsv++] = sv;


	int luaChon;
	docFile(dssv, slsv);
	cout << "DANH SACH SINH VIEN HIEN THOI: \n";
	hienThiDSSV(dssv, slsv);//loi roi
	//cout << slsv << endl;
	system("pause");
	int i;

	do {
		system("cls");
		cout << "=============== MENU ===============";
		cout << "\n1. Them Sinh vien vao danh sach.";
		cout << "\n2. Hien thi danh sach sinh vien.";
		cout << "\n3. Sap xep theo ten.";
		cout << "\n4. Sap xep theo diem giam dan.";
		cout << "\n5. Tim sinh vien theo ten.";
		cout << "\n6. Ghi thong tin sinh vien ra file.";
		cout << "\n0. Thoat chuong trinh.";
		cout << "\nBan chon ? ";

		cin >> luaChon;
		struct SinhVien sv;

		switch (luaChon) {
		case 0:
			break;

		case 1:
			sv = nhapSV();
			dssv[slsv++] = sv;
			break;

		case 2:
			hienThiDSSV(dssv, slsv);
			system("pause");//cai nao in ra man hinh thi them cai nay cho no dung lai
			break;

		case 3:
			sapXepTheoTen(dssv, slsv);
			cout << "\nDanh sach sinh vien sau khi sap xep theo ten a-z:\n";
			hienThiDSSV(dssv, slsv);
			system("pause");//cai nao in ra man hinh thi them cai nay cho no dung lai
			break;

		case 4:
			sapXepTheoDiem(dssv, slsv);
			cout << "\nDanh sach sinh vien sau khi sap xep theo diem giam dan:\n";
			hienThiDSSV(dssv, slsv);
			system("pause");//cai nao in ra man hinh thi them cai nay cho no dung lai
			break;

		case 5:
			timTheoTen(dssv, slsv);
			break;

		case 6:
			ghiFile(dssv, slsv);
			break;

		default:
			cout << "Sai chuc nang, vui long chon lai!\n";
			system("pause");//cai nao in ra man hinh thi them cai nay cho no dung lai
			break;
		}

	} while (luaChon);
	return 0;
}


// =============================================================================================
//dssv[slsv++] = sv; // phần tử đầu tiên có chỉ số là 0 sẽ đc gán vào sinh viên hiện thời
//	// sau đó, giá trị của sinh viên tăng lên 1.

//cout << "Ma: " << sv.ma << "," <<  "ho ten: " << sv.hoVaTen.ho << sv.hoVaTen.ten; // sai hizz

	/*printf("%-10s %-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n",
		"Ma SV", "Ho", "Dem", "Ten", "Tuoi", "Gioi Tinh",
		"Diem Toan", "Diem Van", "Diem Anh", "Diem TBC");*/

		//cout << "Ma SV" << "Ho" << "Dem" << "Ten" << "Tuoi" << "Gioi Tinh" << "Diem Toan"
		//	<< "Diem Van" << "Diem Anh" << "Dem TBC";

// strcmp (String Compare) là hàm dùng để so sánh hai chuỗi với nhau.
// Hàm sẽ so sánh hai chuỗi với nhau và trả về các giá trị tương ứng.

/*struct SinhVien sv;
	sv = nhapSV();
	dssv[slsv++] = sv;

	cout << "Ma SV" << "\t" << left << setw(5) << "Ho"
		<< "\t" << left << setw(10) << "Dem" << "\t" << left << setw(10) << "Ten" << "\t" << left << setw(10)
		<< "Tuoi" << "\t" << left << setw(10) << "Gioi Tinh" << "\t" << left << setw(10)
		<< "Diem Toan" << "\t" << left << setw(10) << "Diem Van" << "\t"
		<< left << setw(10) << "Diem Anh" << left << setw(10) << "Diem TBC\n";

	for (size_t i = 0; i < slsv; i++)
	{
		hienThiTTSV(dssv[i]);
	}



	ghiFile(dssv, slsv);*/

	/*struct SinhVien sv;
		sv = nhapSV();
		dssv[slsv++] = sv;

		cout << "Ma SV" << "\t" << left << setw(5) << "Ho"
			<< "\t" << left << setw(10) << "Dem" << "\t" << left << setw(10) << "Ten" << "\t" << left << setw(10)
			<< "Tuoi" << "\t" << left << setw(10) << "Gioi Tinh" << "\t" << left << setw(10)
			<< "Diem Toan" << "\t" << left << setw(10) << "Diem Van" << "\t"
			<< left << setw(10) << "Diem Anh" << left << setw(10) << "Diem TBC\n";

		for (size_t i = 0; i < slsv; i++)
		{
			hienThiTTSV(dssv[i]);
		}*/