// To calculate sum of 1st 100 natural numbers
#include<iostream>
using namespace std;
int main() 
{
    int sum=0;
  for (int i = 1; i <= 100; i++)
  {
      sum += i;
  }
  cout<<"The sum of first 100 natural numbers: "<<sum;
return 0;
}