#include<iostream>
using namespace std;
class complex
{
    int real, imag;
    public:
          complex();
          complex(int, int);
          void display();
          complex operator-(complex&);
          complex operator+(complex&);
          complex operator-();
};
complex :: complex()
{
    real=imag=0;
}
complex :: complex(int real, int imag)
{
    this->real=real;
    this->imag=imag;
}
void complex :: display()
{
    if(imag>0)
    cout<<real<<"+"<<imag<<"i"<<endl;

    else
    cout<<real<<imag<<"i"<<endl;
}
complex complex :: operator-(complex& c)
{
    complex temp;
    temp.real = this->real - c.real;
    temp.imag = this->imag - c.imag;
    return temp;
}
complex complex :: operator+(complex& d)
{
    complex temp;
    temp.real = this->real + d.real;
    temp.imag = this->imag + d.imag;
    return temp;
}
complex complex :: operator-()
{
    complex temp;
    temp.real=-this->real;
    temp.imag=-this->imag;
    return temp;
}
int main()
{
    complex c1(5,1);
    complex c2(3,2);
    complex c3 = c1 - c2;//this function will call like this---->c1.operator+(c2);
    c3.display();
    complex c4 = c1 + c2;
    c4.display();
    complex c5 = -c1;//this function will call like this--------->c5 = c1.operator-();
    c5.display();
}