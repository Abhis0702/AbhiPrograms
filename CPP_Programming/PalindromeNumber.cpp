#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,temp;
    cout<<"Enter Number To Check Palindrome :";
    cin>>n;
    temp = n;
    while(n>0)
    {
        r=n%10;
        sum = (sum*10)+r;
        n=n/10;
    }
    if(sum==temp)
    cout<<"It Is Palindrome Number";
    else
    cout<<"It Is Not Palindrome";
}