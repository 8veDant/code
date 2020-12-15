// 1 Bubble sort

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int a[100];
    int n, i, j, t;
    cout << "\nNo. of elements want to enter:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << (i + 0) << ": ";
        cin >> a[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    cout << "\n After the sorting the values are:";
    for (i = 0; i < n; i++)
    {
        cout << "\n"
             << a[i];
    }

    return 0;
}
