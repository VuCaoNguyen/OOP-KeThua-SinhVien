#include "DanhSachSV.h"

istream& operator >> (istream &is, DanhSachSV &x)
{
	cout << "\nNhap vao so luong Sinh vien: ";
	is >> x.SoLuongSV;
	x.DS = new SinhVien[x.SoLuongSV];
	for (int i = 0; i < x.SoLuongSV; i++)
	{
		is >> x.DS[i];
	}
	return is;
}
ostream& operator << (ostream &os, DanhSachSV x)
{
	os << "\n============Xuat DanhSach Sinh Vien======================";
	for (int i = 0; i < x.SoLuongSV; i++)
	{
		os << "\nSTT: " << i + 1;
		os << x.DS[i];
	}
	return os;
}

DanhSachSV::DanhSachSV()
{
}


DanhSachSV::~DanhSachSV()
{
}
