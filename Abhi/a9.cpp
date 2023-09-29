#include<iostream>
using namespace std;

class complex
{
	int real, imag;
	public:
		void get()
		{
			cout<<"Enter Real nd Imag :\n";
			cin>>real>>imag;
		}
		void put()
		{
			cout<<"Complex No is :\t";
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main()
{
	int i,n;
	cout<<"Accept Number OF Objects :";
	cin>>n;
	complex *ptr = new complex[n];
	for(i=0; i<n; i++)
	{
		ptr[i].get();
	}
	for(i=0; i<n; i++)
	{
		ptr[i].put();
	}
	delete [] ptr;
}
