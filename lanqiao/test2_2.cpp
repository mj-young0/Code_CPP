/*
 * @程序名: test3_2.cpp
 * @功能: 编写函数求两个整数的最大公约数和最小公倍数
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 15:42:01
 * @LastEditTime: 2021-10-24 15:43:04
 * @版本: 1.0
 * @实验思路: 一个数的最大公约数可用辗转相除法求，利用递归算法实现，
 * 最小公倍数是两个数相乘再乘以它们的最大公约数可得。
 */

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