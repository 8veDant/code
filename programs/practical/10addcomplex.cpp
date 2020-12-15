// complex number addition
#include<iostream>
using namespace std;
class complex
{
    private:
    float x,y;
    public:
    complex()
    {
    }
    complex(float real, float img)
    {
      x= real;
      y=img;  
    }
    void display()
    {
        cout<<x<<"+"<<y<<"i\n";
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.x=x+c.x;
        temp.y=x+c.y;
        return(temp);
    }
};
int main(int argc,char**argv) 
{
 complex c1,c2,c3;
 c1=complex(3.4,3.5);
 c2=complex(6.5,7.5);
 cout<<"\nFirst no is:";
 c1.display();
 cout<<"\nSecond no is:";
 c2.display();
 c3=c1+c2;
 cout<<"\n The addition=";
 c3.display();
return 0;
}