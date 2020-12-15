#include <iostream>
using namespace std;
int main()
{
    int n,a[20],x,c,pos;
    cout << "Enter the number of elements for the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << (i + 0) << ": ";
        cin >> a[i];
    }
    cout<<"Enter the number to be search : ";
	cin>>x;
	for(int i=0; i<n; i++)
	{
		if(a[i]==x)
		{
			pos=i;
            cout<<x<<" :Found at position: "<<pos;	
		}
	}
    return 0;
}
