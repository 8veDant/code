#include<iostream>
using namespace std;
class base //single base class 
{
  public: int x;
  void getdata()
  {
      cout<<"Enter value of x=";
      cin>>x;
  }

};
class derive1: public base //derived class
{
  public: int y;
  void readdata()
  {
      cout<<"Enter value of y=";
      cin>>y;
  }

};
class derive2: public derive1 // deriver from derive1
{
    private:int z;
    public: void indata()
    {
        cout<<"\nEnter value of z=";
        cin>>z;
    }
};
    int main() 
{
  
return 0;
}