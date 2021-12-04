
#include <iostream>
using namespace std;
//求最大公约数
int maxY(int a, int b)
{
    int max, min;
    max = a > b ? a : b;
    min = a < b ? a : b;
    if (max % min == 0)
    {
        return min;
    }
    else
    {
        return maxY(min, max % min);
    }
}
int main()
{
    int a, b;
    cout << "请输入两个正整数：";
    cin >> a >> b;
    cout << "最大公约数是：" << maxY(a, b) << endl;
    cout << "最小公倍数是：" << a * b * maxY(a, b) << endl;
    return 0;
}