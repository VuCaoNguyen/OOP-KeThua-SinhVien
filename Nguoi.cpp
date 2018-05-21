#include "Nguoi.h"

istream& operator >> (istream &is, Nguoi &x)
{

	cout << "\nNhap vao ho ten: ";
	getline(is, x.HoTen);

	cout << "\nNhap vao ngay sinh: ";
	is >> x.NgaySinh;

	cout << "\nNhap Gioi Tinh: ";
	is >> x.GTinh;


	return is;
}

ostream& operator << (ostream &os, Nguoi x)
{
	os << "\nHo va ten: " << x.HoTen;
	os << "\nNgay Sinh: " << x.NgaySinh;
	os << "\tGioi Tinh: " << x.GTinh;
	return  os;
}
Nguoi::Nguoi()
{
}


Nguoi::~Nguoi()
{
}
