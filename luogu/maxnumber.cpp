#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "请输入三个数";
    cin >> x >> y >> z;
    if (x > y && x > z)
    {
        cout << "最大值为：" << x;
    }
    else if (y > x && y > z)
    {
        cout << "最大值为：" << y;
    }
    else
    {
        cout << "最大值为：" << z;
    }
}