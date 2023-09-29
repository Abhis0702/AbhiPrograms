#include<iostream>
using namespace std;
//void display(char = '*', int =3);

void display(char c = '*', int count = 3)
{
	for(int i=1; i<=count; ++i)
	{
		cout<<c;
	}
	cout<<endl;
}
int main()
{
	cout<<"No rgument Passed :";
	display();
	
	cout<<"One Argument Passed :";
	display('#');
	
	cout<<"Both Arguments Passed :";
	display('$', 5);
}

