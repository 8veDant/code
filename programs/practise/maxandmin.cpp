#include<iostream>
using namespace std;
int main() 
{
 int a,b,max,min;
 cout<<"Enter the two numbers: ";
 cin>>a>>b;
 max=(a>b) ? a : b;
 cout<<"Maximum of "<<a<<" and "<<b<<" :"<<max; 
 min=(a<b) ? a : b;
 cout<<"\nminimum of "<<a<<" and "<<b<<" :"<<min<<endl;   
 return 0;
}