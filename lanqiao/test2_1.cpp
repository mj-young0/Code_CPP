/*
 * @程序名: test3_1.cpp
 * @功能: 编写函数实现递归方式求取整数n的阶乘，要求在主函数中输入非负整数n,（其中n<=10）。
 * 通过调用输出结果，例如输入5,得到5！=120。
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-24 15:05:46
 * @LastEditTime: 2021-10-28 19:51:55
 * @版本: 1.0
 * @实验思路: 阶乘 就是每次用自己乘以自己-1，然后用自己-1在乘自己-1-1……
 * 利用递归的性质可以很好的实现这个过程。
 */
#include <iostream>
using namespace std;
int fac(int m)
{
    if (m == 0)
    {
        return 1;
    }
    else
    {
        return fac(m - 1) * m;
    }
}
int main()
{
    unsigned n;
    cout << "请输入一个10以内非负整数：";
    cin >> n;
    if(n>10||n<=0){
        cout<<"输入数字不合法，请重新输入。";
        cin>>n;
    }
    int s = fac(n);
    cout << n << "! = " << s;
    return 0;
}