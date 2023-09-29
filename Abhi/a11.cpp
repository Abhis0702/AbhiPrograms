#include<iostream>
using namespace std;

class temp
{
	int a;
	public :
		void get()
		{
			cin>>this->a;
		}	
		temp add(temp& b1)
		{
			temp obj3;
			obj3.a = this->a + b1.a;
			return obj3;
		}
		void show()
		{
			cout<<"Value is : "<<a<<endl;
		}
};

int main()
{
	temp obj1, obj2;
	obj1.get();
	obj2.get();
	temp obj4 = obj1.add(obj2);
	obj4.show();
}
