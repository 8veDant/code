#include<iostream>
using namespace std;
class ABC
{
    private:
    int num=100;
    char ch='C';
    public:
    friend void disp(ABC obj);
};
void disp(ABC abj)
{
    cout<<obj.num<<endl;
    cout<<"\n"<<obj.ch;
}
int main() 
{

return 0;
}