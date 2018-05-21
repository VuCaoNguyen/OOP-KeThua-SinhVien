#pragma once#pragma once
#include "Ngay.h"
#include <string>
//Lop Cha
class Nguoi
{
protected:
	string HoTen;
	Ngay NgaySinh;
	string  GTinh;
public:
	friend istream& operator >> (istream &, Nguoi&);
	friend ostream& operator <<(ostream &, Nguoi);
	Nguoi();
	~Nguoi();
};


