#include<iostream>
using namespace std;
class shop
{
   
    public:
     int itemID[100];
    int itemPrice[100];
    int counter;
        void initcounter(void)
        {counter=0;}
        void setPrice(void);
        void displayprice(void);
      
};
void shop :: setPrice(void)
{
    cout<<"Enter Id of your item"<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter ++;
}
void shop :: displayprice(void)
{
    for ( int i = 0; i < counter; i++)
    {
      cout<<"The price of item with ID"<<itemID[i]<<"is"<<itemPrice[i];
      
    }
    
}
int main() 
{

return 0;
}