#include<iostream>
using namespace std;
int main() 
{
    int a[10],sum=0;
    for (int i = 1; i <= 5; i++)
    {
        cout<<"Enter the "<<i<<" number : ";
        cin>>a[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        sum +=a[i];
    }
    cout<<sum;
    return 0;
}