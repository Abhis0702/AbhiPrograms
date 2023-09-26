#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> g1;
	
	for(int i=1;i<=5;i++)
		g1.push_back(i);
		
		cout<<"Size :"<<g1.size();
		cout<<"\nCapacity :"<<g1.capacity();
		cout<<"\nMax_Size :"<<g1.max_size();
		
		g1.push_back(10);
		cout<<"\nSize: "<<g1.size();
		cout<<"\nCapacity :"<<g1.capacity();
		cout<<"\nMax_Size :"<<g1.max_size();
		
		//Prints The Vector Size After Resize
		cout<<"\nSize: "<<g1.size();
		
		//Checks if the vector is empty or not
		if(g1.empty() == false)
		cout<<"\n Vector is not Empty :";
		else
		cout<<"\n Vector is Empty :";
}
