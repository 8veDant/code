#include <iostream>
using namespace std;
class Circle
{
public:
    int xc, yc;
    float rad, area, circum;

public:
    Circle(int x, int y, float r)
    {
        xc = x;
        yc = y;
        rad = r;
    }
    void area1()
    {
        area = 3.14 * rad * rad;
        cout << "\n Area of circle is =" << area;
    }
    void circum1()
    {
        circum = 2 * 3.14 * rad;
        cout << "\n circumference of circle is=" << circum;
    }
};
int main()
{
    int op, x, y;
    float r;
    cout << "\n 1) predefined\n 2) user defined \n  Enter your choice:";
    cin >> op;
    switch (op)
    {
        case 1:
     {
        Circle B(0, 0, 0.1);
        B.area1();
        B.circum1();
     }
        break;
        case 2:
     {
        cout << "Enter x co-ordinate=";
        cin >> x;
        cout << "Enter y cordinate=";
        cin >> y;
        cout << "Enter radius=";
        cin >> r;
        Circle B(x, y, r);
        B.area1();
        B.circum1();
     }
        break;
        default:
        cout << "Enter a proper value";
    }
        return 0;
}   