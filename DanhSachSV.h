#pragma once
#include "SinhVien.h"
class DanhSachSV
{
private:
	int SoLuongSV;
	SinhVien *DS;
public:

	friend istream& operator >> (istream &, DanhSachSV &);
	friend ostream& operator << (ostream &, DanhSachSV);
	DanhSachSV();
	~DanhSachSV();
};

