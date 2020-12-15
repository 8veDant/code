#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int A,B,C,D,X1,X2,X;
    cout<<"Enter the value of A: ";
    cin>>A;
    cout<<"Enter the value of B: ";
    cin>>B;
    cout<<"Enter the value of C: ";
    cin>>C;
    D=B*B-4*A*C;
    if (D>0)
    {
        X1=(-B+sqrt(D))/2*A;
        cout<<"X1="<<X1;
        X2=(-B-sqrt(D))/2*A;
        cout<<"\nX2="<<X2;
    }
    else if (D=0)
    {
        X=-B/2*A;
        cout<<"X="<<X;

    }
    else
    {
        cout<<"No real root exist";
    }
    return 0;
}