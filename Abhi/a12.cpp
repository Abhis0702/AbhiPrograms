//User Defined Copy Constructor For Customized Copying
#include<iostream>
using namespace std;

class date
{
	int dd, mm, yy;
	public:
		void show();
		date(int, int, int);
		date(date&);
};

date :: date(int d, int m, int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void date :: show()
{
	cout<<"Date is :"<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date :: date(date &d_new)
{
	this->dd = d_new.dd;
	this->mm = 9;
	this->yy = 18;
}

int main()
{
	date d(8,8,17);
	date d1(d);
	d.show();
	d1.show();
}
