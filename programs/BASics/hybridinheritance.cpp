// hybrid inheritance
#include<iostream>
using namespace std;
class student //base class
{
   protected:
   char name[20];
   int rollno;
};
class test: public student 
{
  protected:
  int marks;
  public:
  void read()
  {
    cout<<"Enter name, roll no and marks: ";
    gets(name);
    cin>>rollno>>marks;  
  }
};
class sports
{
    protected:
    int score;
    public:
    void accept()
 {
    cout<<" 1. Student has won in national sports event \n";
    cout<<" 2. Student has not won in any national sports event \n";
    cout<<"Enter the choice:";
    cin>>score;  
 }

};
class result: public test,public sports
{
    int total;
    public:
    void calculate() 
 {
   if (score==1)
   
       total=marks+15;
       else
       
         total=marks;
 }
 void display()
 {
     cout<<"Total is "<<total;
 }
       
};
int main() 
{
result r;
r.read();
r.accept();
r.calculate();
r.display();
return 0;
}