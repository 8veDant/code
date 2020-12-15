// CONSTRUCTOR OVERLOADING
#include<iostream>
using namespace std;
class ratio 
{
 public:
 int x, y;
 ratio()   
 {
 x=5;
 y=6;
 }
 ratio(int a)  // parameterised
 {
    x= a;
    y=15 ;
 }
 void print()
 {
     cout<<"\n The ratio is="<<x<<"/"<<y;

 }

};

int main() 
{
ratio r1,r2(10);
cout<<"\n using constructor 1";
r1.print();
cout<<"\nusing constructor 2";
r2.print();
return 0;
}