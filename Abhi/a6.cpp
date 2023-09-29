#include<iostream>
using namespace std;
int main()
{
	char *str = new char[100];
	cin>>str;
	cout<<*(str+10);
	delete [] str;
}
