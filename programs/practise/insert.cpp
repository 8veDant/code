#include <iostream> 
using namespace std; 
  
// Function to insert j in arr at position pos 
int insertj(int n, int ar[], int j, int pos) 
{ 
    int i; 
    // increase the size by 1 for the addition 
    n++; 
    // shift elements forward 
    for (i = n; i >= pos; i--) 
        ar[i] = ar[i - 1];     
    // insert j at pos 
    ar[pos] = j; 
  
    return j; 
} 
//Main Body
int main() 
{ 
    int ar[100]; 
    int i, j, pos, n; 
  
    cout<<"\nNo. of elements want to enter:"; 
        cin>>n;

	for (int i=0; i<n; i++)
	{
		cout<<"Enter number "<<(i+0)<<": "; 
        cin>>ar[i]; 
	}
    // The number to be inserted
    cout<<"Enter the number to be inserted: ";
    cin>>j;
  
    // position at which element is to be inserted 
    cout<<"Enter the position for insertion: ";
    cin>>pos; 
  
    // Insert j at pos 
    insertj(n, ar, j, pos); 
  
    // print the new array 
    for (i = 0; i < n + 1; i++) 
        cout << ar[i] << " "; 
    cout << endl; 
  
    return 0; 
} 