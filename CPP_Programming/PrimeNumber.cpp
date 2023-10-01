#include<iostream>
using namespace std;
int main()
{
   int i,n,m=0,flag=0;
   cout<<"Enter Number :";
   cin>>n;
   m=n/2;
   for(i=2;i<=m;i++)
   {
    if(n%i==0)
    {
        cout<<"Number Is Not Prime"<<endl;;
        flag=1;
        break;
    }
   }
   if(flag==0)
    cout<<"Number Is Prime"<<endl;
}