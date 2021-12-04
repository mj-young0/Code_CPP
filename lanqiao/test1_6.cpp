#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int num1 = 0, num2 = 0, num3 = 0;
    do
    {
        num1 += i;
        i++;
    } while (i <= 100);
    cout << num1 << endl;
    int j=1;
    while (j <= 100)
    {
        num2 += j;
        j++;
    }
    cout << num2 << endl;
    for (i = 1; i <= 100; i++)
    {
        num3 += i;
    }
    cout << num3 << endl;
    return 0;
}