#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Numbers To Swap :";
    cin>>a>>b;
    cout<<"Before swap a = "<<a<<" b = "<<b<<endl; 
    a = a*b;//a=10, b=20; a=10*20 = 200;
    b = a/b;//b=200/20=10;
    a = a/b;//a=200/10=20;
    cout<<"After swap a = "<<a<<" b = "<<b<<endl; 
}