#include<iostream>
using namespace std;

int main()
{
	int s,m,sum=0;
	float avg;
	cout<<"Enter Number Of Subjects:\n";
	cin>>s;
	cout<<"Enter Marks For Each Subject :\n";
	//cin>>m;
	char *name = new char[20];
	int *p = new int[s];
	for(int i=0; i<s; i++)
	{
		cin>>p[i];
		sum = sum + p[i];
	}
		avg = (float) sum/s;
		cout<<"Enter Name of The Student :\n";
		cin>>name;
		cout<<"Name is :"<<name<<endl;
		cout<<"Averge is :"<<avg<<endl;
		
		delete [] p;
		delete [] name;
}
