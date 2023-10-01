#include<iostream>
using namespace std;
void sum(int n1, int n2); //Function Declaration(Global)....;
int main()
{
    int num1,num2;
    cout<<"Enter First Number :";
    cin>>num1;
    cout<<"Enter Second Number :";
    cin>>num2;
    //Use Of Scope Resolution Operator(::)
    :: sum(num1, num2);

    cout<<"Class Example";
    return 0;
}
void sum(int n1, int n2)
{
    int result;
    result = n1+n2;
    cout<<"Addition ="<<result<<endl;
}
