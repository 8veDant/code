#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int width, height;
    char symbol;
    cout<<"Enter the width: ";
    cin>>width;
    cout<<"Enter the height: ";
    cin>>height;
    cout<<"Enter the symbol: ";
    cin>>symbol;
    for (int h = 0  ; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            cout<<setw(5)<<symbol<<" ";
        }
        cout<<"\n";
    }
    
return 0;
}