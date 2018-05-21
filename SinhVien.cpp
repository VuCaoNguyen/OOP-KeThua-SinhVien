#include "SinhVien.h"

istream& operator >> (istream &is, SinhVien &x)
{
	//Goi operator cua DocGia
	Nguoi *cha = static_cast<Nguoi *>(&x);
	

	is.ignore();
	cout << "\nNhap so MSSV: ";
	getline(is, x.MSSV);

	is >> *cha;

	is.ignore();
	cout << "\nNhap vao khoa hoc: "; 
	getline(is, x.KhoaHoc);


	cout << "\nNhap vao so Lop hoc cua sinh vien:";
	cin >> x.SoLopHoc;
	x.LP = new LopHoc[x.SoLopHoc];
	for (int i = 0; i < x.SoLopHoc; i++)
	{
		cin >> x.LP[i];
	}

	
	return is;
}
ostream& operator <<(ostream &os, SinhVien x)
{
	// goi operator xuat cua DocGia
	Nguoi cha = static_cast<Nguoi>(x);

	os << "\nMSSV: " << x.MSSV;

	os << cha;

	os << "\nKhoa: " << x.KhoaHoc;

	for (int i = 0; i < x.SoLopHoc; i++)
	{
		cout << x.LP[i];
	}

	cout << "\nDiem trung binh: " << x.TinhDTB();
	return os;
}
float SinhVien::TinhDTB()
{
	double Tong = 0;
	for (int i = 0; i < SoLopHoc; i++)
	{
		Tong += LP[i].Getter_Diem() ;
	}

	return Tong / SoLopHoc;
}

string  SinhVien::Getter_MSSV()
{
	return MSSV;
}
void SinhVien::Setter_MSSV(string x)
{
	MSSV = x;
}

SinhVien::SinhVien()
{
}


SinhVien::~SinhVien()
{
}
