#include<iostream>
using namespace std;
int main()
{
    char arr[20];
    char* a;
    a=arr;
    cin>>arr;
    while( *a != '\0')
  	{
    	cout << *a;
    	a++;
  	}
	return 0;
    

}