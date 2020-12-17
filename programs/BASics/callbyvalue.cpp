#include<iostream>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"\n\nThe values after swapping are:"<<"\na="<<x<<"\nb="<<y;
}
int main() 

{
    int a=5,b=6;
    cout<<"The two nos.:\n";
    cin>>a>>b;
    cout<<"\nThe values before swapping are:\n"<<"a="<<a<<"\nb="<<b;
    swap(a,b);
}
