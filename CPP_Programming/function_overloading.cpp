#include<iostream>
using namespace std;
void disp();
void disp(int num);
void disp(char ch);
void disp(int num1, int num2);
void disp(int num1, char ch);
int main()
{
    disp();
    disp(10);
    disp('A');
    disp(20,30);
    disp(40,'B');
    return 0;
}
void disp()
{
    cout<<"Inside disp()"<<endl;
}
void disp(int num)
{
    cout<<"Num ="<<num<<endl;
}
void disp(char ch)
{
    cout<<"Char ="<<ch<<endl;
}
void disp(int num1, int num2)
{
    cout<<"Num1 ="<<num1<<"Num2 ="<<num2<<endl;
}
void disp(int num1,char ch)
{
    cout<<"Num ="<<num1<<"Char ="<<ch<<endl;
}
