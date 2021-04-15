#include <iostream>
using namespace std;
int main()
{
  int a;
  long factorial = 1;
  cout << "Enter the number: ";
  cin >> a;
  for (int i = 1; i <= a; i++)
  {
    factorial *= i;
  }

  cout << factorial;

  return 0;
}