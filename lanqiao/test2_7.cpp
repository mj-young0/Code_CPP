/*
 * @程序名:test3_7.cpp 
 * @功能:编写函数输出指定范围内的质数。例如输入100,200，则能够实现求出100-200之间的质数。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 17:56:59
 * @LastEditTime: 2021-10-24 18:04:48
 * @版本: 1.0
 * @实验思路: 利用质数只能被1和它本身整除的特性来判断，使用if语句进行判断。
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, j, k, m, n;
    cout << "请输入两个不相同的正整数：" << endl;
    cin >> m >> n;
    cout << "求" << m << "~" << n << "之间的质数" << endl;
    for (i = m; i <= n; i++)
    {
        int ret = 1;
        k = sqrt(i);
        for (j = 2; j <= k; j++)
        {
            //判断能否被整除
            if (i % j == 0)
            {
                ret = 0;
                break;
            }
        }
        //如果不能被整除，输出i
        if (ret == 1)
            cout << i << " ";
    }
    return 0;
}