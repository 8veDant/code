#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <=n ; i++)
        {
            if (j<=n-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
            
            
        }
        cout<<"\n";
    }
         
    
return 0;
}