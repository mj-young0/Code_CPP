/*
 * @程序名:test8_4.cpp 
 * @功能:处理除数为0的异常，用try/catch语句来捕获异常，并使用throw语句来抛出异常，从而实现异常处理。 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-11-27 14:34:31
 * @LastEditTime: 2021-11-27 14:43:40
 * @版本: 1.0
 * @实验思路:创建 int divide(int x, int y)函数，如果除数为0，抛出x，不是则返回x/y，在主函数中将执行代码用try...catch包起来。
 */
#include <iostream>
using namespace std;
//如果除数为0，抛出x，不是则返回x/y
int divide(int x, int y)
{
    if (y == 0)
    {
        throw x;
    }
    return x / y;
}
int main()
{
    try
    {
        cout << "5/2=" << divide(5, 2) << endl;
        cout << "8/0=" << divide(8, 0) << endl;
        cout << "7/1=" << divide(7, 1) << endl;
    }
    catch (int e)
    {
        cout <<";  "<< e << " is divided by zero!" << endl;
    }
    cout << "That is ok." << endl;
    return 0;
}