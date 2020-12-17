#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);    //The member function for taking the input
    void chk_bin(void); //Checks whether the format is binary
    void onescmp(void); //One's complement
    void displaycmp(void);
};
void binary ::read(void)
{
    cout << "Enter a binary Number:";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::onescmp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::displaycmp(void)
{
    cout<<"The complement is: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    
}

int main()
{
    binary a;
    a.read();
    a.chk_bin();
    a.onescmp();
    a.displaycmp();
    return 0;
}