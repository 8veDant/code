#include<iostream>
using namespace std;
int main() 
{
    int row,col;
    cout<<"Enter the rows:";
    cin>>row;
    cout<<"\nEnter the col:";
    cin>>col;
     for (int i = 1; i <= row; i++)
     {
         for (int j = 1; j <=col; j++)
        {
             if (i==1||i==row||j==1||j==col)
             {
                 cout<<"*";
                 cout<<" ";
             }
             else
             {
                 cout<<"  ";
             }
        }
        cout<<"\n"; 
     }
     
return 0;
}