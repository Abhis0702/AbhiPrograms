#include<iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    cout<<"Enter Number Of Rows :";
    cin>>r;
    cout<<"Enter Number Of Column :";
    cin>>c;
    cout<<"Enter First Matrix Elements :\n";
    for(i=0; i<=r; i++)
    {
        for(j=0; j<=c; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter Second Matrix Elements :\n";
    for(i=0; i<=r; i++)
    {
        for(j=0; j<=c; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Multiply Of The Matrix :\n";
    for(i=0; i<=r; i++)
    {
        for(j=0; j<=c; j++)
        {
            mul[i][j] = a[i][j] * b[i][j];
            cout<<mul[i][j]<<endl;;
        }
    }
}