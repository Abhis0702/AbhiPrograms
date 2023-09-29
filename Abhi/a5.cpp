#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter Array Elements :";
	cin>>n;
	int *ptr = new int[n];
	for(i=0; i<n; i++)
	cin>>ptr[i];
	for(i=0; i<n; i++)
	cout<<*(ptr+i);
	delete [] ptr;
}
