#pragma once
#include <iostream>
using namespace std;
#include <string>
class LopHoc
{
private:
	string LOPHOC;
	string TenMonHoc;
	double Diem;
public:
	friend istream& operator >> (istream &, LopHoc &);
	friend ostream& operator << (ostream &, LopHoc);

	double Getter_Diem()
	{
		return Diem;
	}


	LopHoc();
	~LopHoc();
};

