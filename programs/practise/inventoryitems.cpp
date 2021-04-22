#include <iostream>
using namespace std;
class inventory
{
    string item;
    int quantity;
    int price;

public:
    void getitem()
    {
        cin >> item;
    }

    void getquantity()
    {
        cin >> quantity;
    }
    void getprice()
    {
        cin >> price;
    }

    void displayInfo()
    {
        cout << "Item : " << item << endl;
        cout << "Quantity : " << quantity << endl;
        
    }
    int retrievePrice()
    {
        return price; // class fn to return price of each goods
    }
};
int main()
{
    inventory I[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "GOOD: " << i + 1 << endl;
        cout << "GOODS: " << endl;
        I[i].getitem();
        cout << "Enter Quantity: " << endl;
        I[i].getquantity();
        cout << "Enter the price: " << endl; // line shifted up
        I[i].getprice();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "\nGood: " << i + 1;
        I[i].displayInfo();
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += I[i].retrievePrice(); // summing up over here
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
