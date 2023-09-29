#include<iostream>
using namespace std;

class date
{
	int dd, mm, yy;
	public:
		date(int = 15, int =3, int = 2024);
		void show()
		{
			cout<<"Date is :"<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
date :: date(int d, int m, int y)
{
	dd=d;
	mm=m;
	yy=y;
}
int main()
{
	date d(28);
	d.show();
}
