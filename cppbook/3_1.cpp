/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-09-23 23:58:04
 * @LastEditTime: 2021-10-10 12:15:55
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;

//计算x的n次方
double power(double x, int n)
{
    double val = 1.0;
    while (n--)
    {
        val *= x;
    }
    return val;
}
int main()
{
    cout << "5的二次方等于" << power(5, 2) << endl;
    return 0;
}
