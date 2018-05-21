#pragma once
#include "Nguoi.h"
#include "LopHoc.h"
class SinhVien : public Nguoi
{
private:
	string MSSV;
	LopHoc *LP;
	int SoLopHoc;
	string KhoaHoc;
	double DiemTrungBinh;

public:

	friend istream& operator >> (istream &, SinhVien &);
	friend ostream& operator <<(ostream &, SinhVien);
	float TinhDTB();
	string Getter_MSSV();
	void Setter_MSSV(string);

	SinhVien();
	~SinhVien();
};
