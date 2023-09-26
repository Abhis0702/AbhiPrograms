#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <char> v;
	v.push_back('J');
	v.push_back('A');
	v.push_back('V');
	v.push_back('A');
	for(int i=0; i<v.size();i++)
	cout<<v[i];
	v.rbegin();
	
	v.reserve(v.size());
	v.pop_back();
	for(int i=0; i<v.size();i++)
	cout<<v[i]<<endl;
}
