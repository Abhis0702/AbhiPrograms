#include<iostream>
using namespace std;

class date
{
	int dd, mm, yy;
	public:
		date()
		{
			cout<<"In Default Constructor of date"<<endl;
			dd=9;
			mm=11;
			yy=2023;
		}
		date(int d, int m, int y)
		{
			cout<<"In Prameterised of date "<<endl;
			dd=d;
			mm=m;
			yy=y;
		}
		void display()
		{
			cout<<"Date Is :"<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};

//Contained Class
class employee
{
	int id,sal;
	//contained object
	date d1; 
	public:
		employee()
		{
			cout<<"In Default of Employee\n";
			id=2;
			sal=20000;
		}
		employee(int i, int s, int d, int m, int y):d1(d, m, y)
		{
			cout<<"In Parmeterized Of Employee :\n";
			id=i;
			sal=s;
		}
		void display()
		{
			cout<<"Id :"<<id<<endl;
			cout<<"Salary :"<<sal<<endl;
			d1.display();
		}
};
class student
{
	int rollno, grade;
	date d2;
	public :
			student()
			{
				cout<<"In Default of Student :\n";
				rollno=10;
				grade = 90;
				
			}
			student(int r, int g, int d, int m, int y): d2(d, m, y)
			{
				cout<<"In Parameterized of Student :\n";
				rollno=r;
				grade =g;
			}
			void display()
		    {
			     cout<<"RollNo :"<<rollno<<endl;
			     cout<<"Grades :"<<grade<<endl;
			     d2.display();
		    }			
};
int main()
{
	employee e(1, 50000, 8, 10, 2020);
	e.display();
	student j1(20, 90, 9, 11, 2022);
	j1.display();
	return 0;
}
