#include <iostream>
using namespace std;
int main()
{
    int n, right_digit;
    cout << "enter the number:";
    cin >> n;
    cout << "转换玩的数字是:";
    do
    {
        right_digit = n % 10;
        cout << right_digit;
        n /= 10;
    } while (n != 0);
    cout << endl;
    return 0;
}