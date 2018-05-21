#include "Ngay.h"



istream& operator >> (istream &is, Ngay &x)
{
	cout << "\nNhap vao Ngay: ";
	is >> x.Cngay;
	cout << "\nNhap vao thang: ";
	is >> x.Thang;
	cout << "\nNhap vao Nam: ";
	is >> x.Nam;


	return is;
}
ostream& operator <<(ostream &os, Ngay x)
{
	os << "\nNgay: " << x.Cngay << "/" << x.Thang << "/" << x.Nam ;
	return os;
}



Ngay::Ngay()
{
}


Ngay::~Ngay()
{
}
