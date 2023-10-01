#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char a[50];
    char b[50];
    cout<<"Enter String To Check Palindrome :";
    cin>>a;
    strcpy(b,a);
    strrev(a);
    if(strcmp(a,b)==0)
    cout<<"It Is Palindrome";
    else
    cout<<"Not Palindrome";
}