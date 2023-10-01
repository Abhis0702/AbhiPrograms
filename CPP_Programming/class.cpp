#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    void Accept()
    {
        cout<<"Enter Real Value :";
        cin>>real;
        cout<<"Enter Imaginary Value :";
        cin>>imag;
    }
    void Display()
    {
        cout<<"Real ="<<real<<endl;
        cout<<"Imag ="<<imag;
    }
};
int main()
{
    complex c1;
    c1.Accept();
    c1.Display();
    return 0;
}