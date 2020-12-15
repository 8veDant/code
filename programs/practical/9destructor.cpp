// DESTRUCTOR 

#include<iostream>
using namespace std;
class ratio
{
    public: 
     ratio() //constructors automatically initializes
    {
       cout<<"Object is born"; 
    }    
     void x()
    {
     cout<<"\nnow x is alive";
    }
    ~ratio()
    
    {
        cout<<"\nobjet dies";
    }
};
int main() 
{
ratio r;
r.x();
return 0;
}