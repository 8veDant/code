#include <iostream>
using namespace std;
int delet(int ar[], int n, int j)
{
    // search for j
    int i;
    for (i = 0; i < n; i++)
        if (ar[i] == j)
            break;
    if (i < n) //When j is founD
    {
        //size reduction of array
        n = n - 1;
        for (int k = i; k < n; k++)
            ar[k] = ar[k + 1];
    }
    return n;
}
int main()
{
    int n, ar[20];

    cout<<"\nNo. of elements want to enter:"; 
        cin>>n;

	for (int i=0; i<n; i++)
	{
		cout<<"Enter number "<<(i+0)<<": "; 
                cin>>ar[i];
	}
    int j;
    cout << "The array is:\n ";
    for (int a = 0; a < 5; a++)
    {
        cout << ar[a] << " ";
    }

    cout << "\nEnter the number to remove: ";
    cin >> j;

    // Delete J from the ar[]
    n = delet(ar, n, j);
    // New ar is printed
    cout << "The new ar is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
