#include<iostream>
using namespace std;
class complex
{
	int real, imag;
	public : static const int cnt;
	private: static const int cnt1;
	public:
		complex()
		{
			cout<<"Default is invoked :\n";
			real = 5;
			imag = 5;
			//cnt++;
		}
		static int getcnt()
		{
			return cnt1;
		}
};

const int complex::cnt=5;
const int complex::cnt1=10;

int main()
{
	complex c1;
	cout<<"Private Static Variable is called:"<<complex ::getcnt()<<endl;
	cout<<"Size of obj is :"<<sizeof(c1)<<endl;
	cout<<"Public Static Varible is Called :"<<complex :: cnt;
}
