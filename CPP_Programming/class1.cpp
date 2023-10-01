
//Defining Member Function Of Class Outside The Class Scope Resolution operator I used;

#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    void Accept();
  
    void Display();
   
};
     void complex :: Accept()
    {
        cout<<"Enter Real Value :";
        cin>>real;
        cout<<"Enter Imaginary Value :";
        cin>>imag;
    }
     void complex :: Display()
    {
        cout<<"Real ="<<real<<endl;
        cout<<"Imag ="<<imag;
    }

int main()
{
    complex c1;
    c1.Accept();
    c1.Display();
    return 0;
}