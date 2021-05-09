#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int length;
    char symbol;
    cout<<"Enter the value: ";
    cin>>length;
    cout<<"Enter the symbol: ";
    cin>>symbol;
    for (int i = length; i>=1 ; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<setw(2)<<symbol;
        }
        cout<<"\n"; 
          
        
    }
    
return 0;
}