#include <iostream>
using namespace std;
bool symml(unsigned n)
{
    unsigned i = n;
    unsigned m = 0;
    while (i > 0)
    {
        m = m * 10 + i % 10;
        i /= 10;
    }
    return m == n;
}
int main()
{
    for (unsigned m = 11; m <= 10000000; m++)
    {

        if (symml(m) && symml(m * m) && symml(m * m * m))
        {
            cout << "m=" << m;
            cout << "m*m=" << m * m;
            cout << "m*m*m=" << m * m * m << endl;
        }
    }
    return 0;
}