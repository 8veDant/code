#include <iostream>
using namespace std;
int main()
{
    // count digits in number

    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number == 0)
    {
        cout << "The number entered is 0.\n";
    }
    else
    {
        int counter = 0;
        while (number>0)
        {
           number/=10;
           counter++; 
        }
    cout<<"Digis: "<<counter;
    }
    return 0;
}