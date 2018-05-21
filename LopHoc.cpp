#include "LopHoc.h"

istream& operator >> (istream &is, LopHoc &x)
{
	is.ignore();
	cout << "\nNhap vao Lop hoc: ";
	getline(is, x.LOPHOC);

	cout << "\nNhap vao mon hoc: ";
	getline(is, x.TenMonHoc);
	do
	{
		cout << "\nNhap vao Diem: ";
		is >> x.Diem;
		if (x.Diem < 0 || x.Diem > 10)
		{
			cout << "\nDiem phai trong doan [0,10] cin kiem tra lai!";
		}
	} while (x.Diem < 0 || x.Diem > 10);
	return is;
}
ostream& operator << (ostream &os, LopHoc x)
{
	os << "\nTen mon hoc: " << x.TenMonHoc;
	os << "\nLop hoc: " << x.LOPHOC;
	os << "\nDiem: " << x.Diem;
	return os;
}

LopHoc::LopHoc()
{
}


LopHoc::~LopHoc()
{
}
