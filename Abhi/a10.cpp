#include<iostream>
using namespace std;
 class demo
 {
 	int a;
 	public :
 		demo()
 		{
 		  a=5;	
 		  cout<<a<<endl;
		}
		int add(int a)
		{
			 this->a = this->a - a;
			 return this->a;
		}
 };
 int main()
 {
 	demo d;
 	cout<<"Result = "<<d.add(10);
 }
