#include <iostream>
using namespace std;
#include <iomanip>
void fiddle(int a, int &b)
{
    a = a + 100;
    b = b + 100;
    cout << "the values are ";
    cout << setw(5) << a;
    cout << setw(5) << b << endl;
}
int main()
{
    int x = 7, y = 12;
    cout << "the values are ";
    cout << setw(5) << x;
    cout << setw(5) << y << endl;
    fiddle(x, y);
    cout << "the values are ";
    cout << setw(5) << x;
    cout << setw(5) << y << endl;
    return 0;
}