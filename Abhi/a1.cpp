#include<iostream>
using namespace std;
class complex
{
	int real, imag;
	public : 
	static int cnt;
		complex()
		{
			cout<<"Defult is Invoked:\n";
			real = 5;
			imag = 5;
			cnt++;
		}
		complex(int real, int imag)
		{
			cout<<"Parameterized Is Invoked :\n";
			this->real=real;
			this->imag=imag;
			cnt++;
		}
		static int getcnt()
		{
			cout<<"Static is called\n";
			return cnt;
		}
		int show()
		{
			cout<<"It is Called\n";
			return cnt;
		}
};

int complex :: cnt=0;

int main()
{
	complex c1;
	complex c2(10,10);
	cout<<"No. Of Objects Created Is :"<<complex :: getcnt()<<endl;
	cout<<"Size of Object is :"<<sizeof(c1)<<endl;
	complex :: getcnt();
	c1.show();
	
}
