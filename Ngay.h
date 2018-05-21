#pragma once
#include <iostream>
using namespace std;
class Ngay
{

private:
	int Cngay, Thang, Nam;
public:
	friend istream& operator >> (istream &, Ngay&);
	friend ostream& operator << (ostream &, Ngay);


	Ngay();
	~Ngay();
};

