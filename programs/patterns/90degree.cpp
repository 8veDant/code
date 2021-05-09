#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int length;
    char symbol;
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the symbol: ";
    cin>>symbol;
    for (int i = 1; i <= length; i++)
    {

        for (int j = 1; j <=i; j++)
        {
            cout<<setw(2)<<symbol;
        }
        cout<<endl;
    }
    
return 0;
}