#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c, d, e;
    cout << "请输入一个不超过五位的正整数：";
    cin >> x;
    while (x < 0 || x > 99999)
    {
        cout << "不是规定数字。";
        cin >> x;
    }
    a = x / 10000;
    b = x / 1000;
    c = x / 100;
    d = x / 10;
    e = x - d * 10;
    if (a >= 1 && a < 10)
    {
        cout << a << b - a * 10 << c - b * 10 << d - c * 10 << e << endl;
        cout << e << d - c * 10 << c - b * 10 << b - a * 10 << a << endl;
    }
    else if (b >= 1 && b < 10)
    {
        cout << b << c - b * 10 << d - c * 10 << e << endl;
        cout << e << d - c * 10 << c - b * 10 << b << endl;
    }
    else if (c >= 1 && c < 10)
    {
        cout << c << d - c * 10 << e << endl;
        cout << e << d - c * 10 << c << endl;
    }
    else if (d >= 1 && d < 10)
    {
        cout << d << e << endl;
        cout << e << d << endl;
    }
    else
    {
        cout << d << endl;
        cout << d << endl;
    }
    return 0;
}