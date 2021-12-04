/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-10-22 13:11:26
 * @LastEditTime: 2021-10-22 13:17:40
 * @版本: 1.0
 * @实验思路: 
 */
#include <iostream>
using namespace std;
int i = 1;
void other()
{
    static int a = 2;
    static int b;
    int c = 10;
    a += 2;
    i += 32;
    c += 5;
    cout << "--OTHER--" << endl;
    cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
    b = a;
}
int main()
{
    static int a;
    int b = -10;
    int c = 0;

    cout << "---MAIN---" << endl;
    cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
    c += 8;
    other();
    cout << "---MAIN---" << endl;
    cout << "i:" << i << "a:" << a << "b:" << b << "c:" << c << endl;
    i += 10;
    other();
    return 0;
}